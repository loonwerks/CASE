#include <all.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <unistd.h>

// This file is auto-generated.  Do not edit

static inline void sem_op(int sid, short val) {
    struct sembuf sem_op;
    sem_op.sem_num = 0;
    sem_op.sem_op = val;
    sem_op.sem_flg = 0;
    semop(sid, &sem_op, 1);
}

static inline void lock(int sid) {
    sem_op(sid, -1);
}

static inline void unlock(int sid) {
    sem_op(sid, 1);
}

static inline int create_sem(Z msgid) {
    unsigned int permission = 0666;
    unsigned int mask = IPC_CREAT;
    int sem_set_id = semget((key_t) msgid, 1, mask | permission);

    if (sem_set_id >= 0) {
        union semun {
            int val;
            struct semid_ds *buf;
            ushort *array;
        } sem_val;
        sem_val.val = 1;
        semctl(sem_set_id, 0, SETVAL, sem_val);
    }
    return sem_set_id;
}

Z base_SharedMemory_create(STACK_FRAME Z id) {
    unsigned int permission = 0666;
    unsigned int mask = IPC_CREAT;

    create_sem(id);

    int shmid = shmget((key_t) id, sizeof(union Option_8E9F45), (int) (permission | mask));
    void *p = shmat(shmid, (void *) 0, 0);
    memset(p, 0, sizeof(union Option_8E9F45));
    shmdt(p);

    return (Z) shmid;
}

Unit base_SharedMemory_receive(STACK_FRAME Z port, MBox2_1CBFC4 out) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);

    while (p->type != TSome_D29615) { // wait until there is a data
        unlock(sid);
        usleep((useconds_t) 10 * 1000);
        lock(sid);
    }

    art_DataContent d = &p->Some_D29615.value;
    Type_assign(&(out->value2), d, sizeOf((Type) d));
    memset(p, 0, sizeof(union Option_8E9F45));
    shmdt(p);

    unlock(sid);
}

Unit base_SharedMemory_receiveAsync(STACK_FRAME Z port, MBox2_1029D1 out) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);

    if (p->type == TSome_D29615) {
        Type_assign(&(out->value2), p, sizeOf((Type) p));
        memset(p, 0, sizeof(union Option_8E9F45));
    } else {
        out->value2.type = TNone_964667;
    }

    shmdt(p);

    unlock(sid);
}

Unit base_SharedMemory_send(STACK_FRAME Z destid, Z port, art_DataContent d) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);

    while (p->type == TSome_D29615) {
        unlock(sid);
        usleep((useconds_t) 10 * 1000);
        lock(sid);
    }

    p->type = TSome_D29615;
    Type_assign(&(p->Some_D29615.value), d, sizeOf((Type) d));

    shmdt(p);

    unlock(sid);
}

B base_SharedMemory_sendAsync(STACK_FRAME Z destid, Z port, art_DataContent d) {
    int sid = semget((key_t) port, 1, 0666);

    lock(sid);

    int shmid = shmget((key_t) port, sizeof(union Option_8E9F45), 0666);

    Option_8E9F45 p = (Option_8E9F45) shmat(shmid, (void *) 0, 0);
    p->type = TSome_D29615;
    Type_assign(&(p->Some_D29615.value), d, sizeOf((Type) d));

    shmdt(p);

    unlock(sid);
    return T;
}

Unit base_SharedMemory_remove(STACK_FRAME Z id) {
    semctl(semget((key_t) id, 1, 0666), 0, IPC_RMID);
    shmctl(shmget((key_t) id, sizeof(union Option_8E9F45), 0666), IPC_RMID, NULL);
}

Unit base_Process_sleep(STACK_FRAME Z n) {
    usleep((useconds_t) n * 1000);
}
