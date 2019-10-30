#include <all.h>

// IS[Z, uav_project_extern.SW.Coordinate_Impl]
uav_project_extern_SW_Coordinate_Impl IS_83A978_at(IS_83A978 this, Z i);
void IS_83A978_up(IS_83A978 this, Z i, uav_project_extern_SW_Coordinate_Impl e);
Z IS_83A978_size(STACK_FRAME IS_83A978 this);
Z IS_83A978_zize(STACK_FRAME IS_83A978 this);

B IS_83A978__eq(IS_83A978 this, IS_83A978 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (uav_project_extern_SW_Coordinate_Impl__ne((uav_project_extern_SW_Coordinate_Impl) &this->value[i], (uav_project_extern_SW_Coordinate_Impl) &other->value[i])) return F;
  }
  return T;
}

void IS_83A978_create(STACK_FRAME IS_83A978 result, Z size, uav_project_extern_SW_Coordinate_Impl dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert(size <= MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }
  result->size = zize;
}

void IS_83A978_zreate(STACK_FRAME IS_83A978 result, Z size, uav_project_extern_SW_Coordinate_Impl dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "zreate", 0);
  sfAssert(size <= MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }
  result->size = zize;
}

void IS_83A978__append(STACK_FRAME IS_83A978 result, IS_83A978 this, uav_project_extern_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_83A978));
  Type_assign(&result->value[thisSize], value, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  result->size = (int8_t) (thisSize + 1);
}

void IS_83A978__prepend(STACK_FRAME IS_83A978 result, IS_83A978 this, uav_project_extern_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  result->size = (int8_t) thisSize + 1;
}

void IS_83A978__appendAll(STACK_FRAME IS_83A978 result, IS_83A978 this, IS_83A978 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_83A978));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct uav_project_extern_SW_Coordinate_Impl));
}

void IS_83A978__sub(STACK_FRAME IS_83A978 result, IS_83A978 this, uav_project_extern_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    uav_project_extern_SW_Coordinate_Impl o = (uav_project_extern_SW_Coordinate_Impl) &this->value[i];
    if (uav_project_extern_SW_Coordinate_Impl__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }
  result->size = k;
}

void IS_83A978__removeAll(STACK_FRAME IS_83A978 result, IS_83A978 this, IS_83A978 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    uav_project_extern_SW_Coordinate_Impl o = (uav_project_extern_SW_Coordinate_Impl) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (uav_project_extern_SW_Coordinate_Impl__eq(o, (uav_project_extern_SW_Coordinate_Impl) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct uav_project_extern_SW_Coordinate_Impl));
  }
  result->size = k;
}

void IS_83A978_cprint(IS_83A978 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct uav_project_extern_SW_Coordinate_Impl *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    uav_project_extern_SW_Coordinate_Impl_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      uav_project_extern_SW_Coordinate_Impl_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_83A978_string_(STACK_FRAME String result, IS_83A978 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct uav_project_extern_SW_Coordinate_Impl *value = this->value;
    String space = string(" ");
    String_string_(SF result, space);
    uav_project_extern_SW_Coordinate_Impl_string_(SF result, (uav_project_extern_SW_Coordinate_Impl) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      uav_project_extern_SW_Coordinate_Impl_string_(SF result, (uav_project_extern_SW_Coordinate_Impl) &(value[i]));
    }
    String_string_(SF result, space);
  }
  String_string_(SF result, string("]"));
}

B IS_83A978__ne(IS_83A978 this, IS_83A978 other);
