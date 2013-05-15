/*
** Lua binding: CCPhysicsWorld_luabinding
** Generated automatically by tolua++-1.0.92 on Wed May 15 14:42:27 2013.
*/

#include "CCPhysicsWorld_luabinding.h"
#include "CCLuaEngine.h"

using namespace cocos2d;




#include "CCPhysicsShape.h"
#include "CCPhysicsBody.h"
#include "CCPhysicsWorld.h"
#include "CCPhysicsDebugNode.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPoint (lua_State* tolua_S)
{
 CCPoint* self = (CCPoint*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"CCPhysicsWorld");
 tolua_usertype(tolua_S,"CCPointArray");
 tolua_usertype(tolua_S,"CCPhysicsBody");
 
 tolua_usertype(tolua_S,"CCPhysicsDebugNode");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"CCPhysicsShape");
 tolua_usertype(tolua_S,"CCObject");
}

/* method: create of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_create00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float gravityX = ((float)  tolua_tonumber(tolua_S,2,0));
  float gravityY = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCPhysicsWorld* tolua_ret = (CCPhysicsWorld*)  CCPhysicsWorld::create(gravityX,gravityY);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsWorld");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_create01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_create01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  {
   CCPhysicsWorld* tolua_ret = (CCPhysicsWorld*)  CCPhysicsWorld::create();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsWorld");
  }
 }
 return 1;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_create00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: createDebugNode of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createDebugNode00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createDebugNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createDebugNode'", NULL);
#endif
  {
   CCPhysicsDebugNode* tolua_ret = (CCPhysicsDebugNode*)  self->createDebugNode();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsDebugNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createDebugNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGravity of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_getGravity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_getGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  float gravityX = ((float)  tolua_tonumber(tolua_S,2,0));
  float gravityY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGravity'", NULL);
#endif
  {
   self->getGravity(&gravityX,&gravityY);
   tolua_pushnumber(tolua_S,(lua_Number)gravityX);
   tolua_pushnumber(tolua_S,(lua_Number)gravityY);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGravity of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_setGravity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_setGravity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  float gravityX = ((float)  tolua_tonumber(tolua_S,2,0));
  float gravityY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGravity'", NULL);
#endif
  {
   self->setGravity(gravityX,gravityY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGravity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createCircleBody of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createCircleBody00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createCircleBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  float mass = ((float)  tolua_tonumber(tolua_S,2,0));
  float radius = ((float)  tolua_tonumber(tolua_S,3,0));
  float offsetX = ((float)  tolua_tonumber(tolua_S,4,0));
  float offsetY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createCircleBody'", NULL);
#endif
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  self->createCircleBody(mass,radius,offsetX,offsetY);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createCircleBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createBoxBody of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createBoxBody00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createBoxBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  float mass = ((float)  tolua_tonumber(tolua_S,2,0));
  float width = ((float)  tolua_tonumber(tolua_S,3,0));
  float height = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createBoxBody'", NULL);
#endif
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  self->createBoxBody(mass,width,height);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createBoxBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createPolygonBody of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createPolygonBody00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createPolygonBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCPointArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  float mass = ((float)  tolua_tonumber(tolua_S,2,0));
  CCPointArray* vertexes = ((CCPointArray*)  tolua_tousertype(tolua_S,3,0));
  float offsetX = ((float)  tolua_tonumber(tolua_S,4,0));
  float offsetY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createPolygonBody'", NULL);
#endif
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  self->createPolygonBody(mass,vertexes,offsetX,offsetY);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createPolygonBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createPolygonBody of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createPolygonBody01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createPolygonBody01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !toluafix_istable(tolua_S,3,"LUA_TABLE",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  float mass = ((float)  tolua_tonumber(tolua_S,2,0));
  LUA_TABLE vertexes = (  toluafix_totable(tolua_S,3,0));
  float offsetX = ((float)  tolua_tonumber(tolua_S,4,0));
  float offsetY = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createPolygonBody'", NULL);
#endif
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  self->createPolygonBody(mass,vertexes,offsetX,offsetY);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createPolygonBody00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBody of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_addBody00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_addBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  CCPhysicsBody* body = ((CCPhysicsBody*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBody'", NULL);
#endif
  {
   self->addBody(body);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBodyByTag of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_getBodyByTag00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_getBodyByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBodyByTag'", NULL);
#endif
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  self->getBodyByTag(tag);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBodyByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBodyByTag of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeBodyByTag00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeBodyByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  bool unbind = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBodyByTag'", NULL);
#endif
  {
   self->removeBodyByTag(tag,unbind);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBodyByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBody of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeBody00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  CCPhysicsBody* body = ((CCPhysicsBody*)  tolua_tousertype(tolua_S,2,0));
  bool unbind = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBody'", NULL);
#endif
  {
   self->removeBody(body,unbind);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllBodies of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeAllBodies00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeAllBodies00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
  bool unbind = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllBodies'", NULL);
#endif
  {
   self->removeAllBodies(unbind);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllBodies'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_start00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_start00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start'", NULL);
#endif
  {
   self->start();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  CCPhysicsWorld */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_stop00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* self = (CCPhysicsWorld*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'", NULL);
#endif
  {
   self->stop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: defaultStaticBody of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_defaultStaticBody00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_defaultStaticBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* world = ((CCPhysicsWorld*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  CCPhysicsBody::defaultStaticBody(world);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'defaultStaticBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createStaticBody of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_createStaticBody00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_createStaticBody00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* world = ((CCPhysicsWorld*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  CCPhysicsBody::createStaticBody(world);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createStaticBody'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_create00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCPhysicsWorld",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsWorld* world = ((CCPhysicsWorld*)  tolua_tousertype(tolua_S,2,0));
  float mass = ((float)  tolua_tonumber(tolua_S,3,0));
  float moment = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CCPhysicsBody* tolua_ret = (CCPhysicsBody*)  CCPhysicsBody::create(world,mass,moment);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsBody");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTag of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getTag00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTag of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setTag00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTag'", NULL);
#endif
  {
   self->setTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMass of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getMass00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getMass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMass'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getMass();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMass of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setMass00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setMass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float mass = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMass'", NULL);
#endif
  {
   self->setMass(mass);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInertia of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getInertia00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getInertia00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getInertia'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getInertia();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInertia'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setInertia of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setInertia00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setInertia00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float inertia = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setInertia'", NULL);
#endif
  {
   self->setInertia(inertia);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setInertia'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVelocity of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVelocity'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getVelocity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVelocity of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocity01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocity01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float velocityX = ((float)  tolua_tonumber(tolua_S,2,0));
  float velocityY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVelocity'", NULL);
#endif
  {
   self->getVelocity(&velocityX,&velocityY);
   tolua_pushnumber(tolua_S,(lua_Number)velocityX);
   tolua_pushnumber(tolua_S,(lua_Number)velocityY);
  }
 }
 return 2;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocity00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVelocity of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* velocity = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVelocity'", NULL);
#endif
  {
   self->setVelocity(*velocity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVelocity of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocity01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocity01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float velocityX = ((float)  tolua_tonumber(tolua_S,2,0));
  float velocityY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVelocity'", NULL);
#endif
  {
   self->setVelocity(velocityX,velocityY);
  }
 }
 return 0;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocity00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVelocityLimit of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocityLimit00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocityLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVelocityLimit'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getVelocityLimit();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVelocityLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVelocityLimit of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocityLimit00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocityLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float limit = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVelocityLimit'", NULL);
#endif
  {
   self->setVelocityLimit(limit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVelocityLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngleVelocity of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngleVelocity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngleVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngleVelocity'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngleVelocity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngleVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngleVelocity of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngleVelocity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngleVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float velocity = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngleVelocity'", NULL);
#endif
  {
   self->setAngleVelocity(velocity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngleVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngleVelocityLimit of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngleVelocityLimit00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngleVelocityLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngleVelocityLimit'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngleVelocityLimit();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngleVelocityLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngleVelocityLimit of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngleVelocityLimit00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngleVelocityLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float limit = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngleVelocityLimit'", NULL);
#endif
  {
   self->setAngleVelocityLimit(limit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngleVelocityLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getForce of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getForce00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getForce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getForce'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getForce();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getForce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getForce of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getForce01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getForce01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float forceX = ((float)  tolua_tonumber(tolua_S,2,0));
  float forceY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getForce'", NULL);
#endif
  {
   self->getForce(&forceX,&forceY);
   tolua_pushnumber(tolua_S,(lua_Number)forceX);
   tolua_pushnumber(tolua_S,(lua_Number)forceY);
  }
 }
 return 2;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getForce00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setForce of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setForce00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setForce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* force = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setForce'", NULL);
#endif
  {
   self->setForce(*force);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setForce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setForce of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setForce01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setForce01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float forceX = ((float)  tolua_tonumber(tolua_S,2,0));
  float forceY = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setForce'", NULL);
#endif
  {
   self->setForce(forceX,forceY);
  }
 }
 return 0;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setForce00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTorque of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getTorque00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getTorque00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTorque'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getTorque();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTorque'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTorque of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setTorque00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setTorque00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float force = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTorque'", NULL);
#endif
  {
   self->setTorque(force);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTorque'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getPosition00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getPosition01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   self->getPosition(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setPosition00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  const CCPoint* pos = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(*pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setPosition01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y);
  }
 }
 return 0;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAngle of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngle00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAngle'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getAngle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAngle of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngle00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float angle = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAngle'", NULL);
#endif
  {
   self->setAngle(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getRotation00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setRotation00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float rotation = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(rotation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bindNode of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_bindNode00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_bindNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  CCNode* node = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bindNode'", NULL);
#endif
  {
   self->bindNode(node);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bindNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unbind of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_unbind00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_unbind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unbind'", NULL);
#endif
  {
   self->unbind();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unbind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSegmentShape of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addSegmentShape00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addSegmentShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  CCPoint lowerLeft = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  CCPoint lowerRight = *((CCPoint*)  tolua_tousertype(tolua_S,3,0));
  float thickness = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSegmentShape'", NULL);
#endif
  {
   CCPhysicsShape* tolua_ret = (CCPhysicsShape*)  self->addSegmentShape(lowerLeft,lowerRight,thickness);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSegmentShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addCircleShape of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addCircleShape00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addCircleShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float radius = ((float)  tolua_tonumber(tolua_S,2,0));
  float offsetX = ((float)  tolua_tonumber(tolua_S,3,0));
  float offsetY = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addCircleShape'", NULL);
#endif
  {
   CCPhysicsShape* tolua_ret = (CCPhysicsShape*)  self->addCircleShape(radius,offsetX,offsetY);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addCircleShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBoxShape of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addBoxShape00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addBoxShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
  float height = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBoxShape'", NULL);
#endif
  {
   CCPhysicsShape* tolua_ret = (CCPhysicsShape*)  self->addBoxShape(width,height);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBoxShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPolygonShape of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addPolygonShape00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addPolygonShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCPointArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  CCPointArray* vertexes = ((CCPointArray*)  tolua_tousertype(tolua_S,2,0));
  float offsetX = ((float)  tolua_tonumber(tolua_S,3,0));
  float offsetY = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPolygonShape'", NULL);
#endif
  {
   CCPhysicsShape* tolua_ret = (CCPhysicsShape*)  self->addPolygonShape(vertexes,offsetX,offsetY);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsShape");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addPolygonShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addPolygonShape of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addPolygonShape01
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addPolygonShape01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  int vertexes = ((int)  tolua_tonumber(tolua_S,2,0));
  float offsetX = ((float)  tolua_tonumber(tolua_S,3,0));
  float offsetY = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addPolygonShape'", NULL);
#endif
  {
   CCPhysicsShape* tolua_ret = (CCPhysicsShape*)  self->addPolygonShape(vertexes,offsetX,offsetY);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCPhysicsShape");
  }
 }
 return 1;
tolua_lerror:
 return tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addPolygonShape00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeShapeAtIndex of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeShapeAtIndex00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeShapeAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeShapeAtIndex'", NULL);
#endif
  {
   self->removeShapeAtIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeShapeAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeShape of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeShape00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCPhysicsShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
  CCPhysicsShape* shapeObject = ((CCPhysicsShape*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeShape'", NULL);
#endif
  {
   self->removeShape(shapeObject);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllShape of class  CCPhysicsBody */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeAllShape00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeAllShape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsBody",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsBody* self = (CCPhysicsBody*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllShape'", NULL);
#endif
  {
   self->removeAllShape();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllShape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getElasticity of class  CCPhysicsShape */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_getElasticity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_getElasticity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsShape* self = (CCPhysicsShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getElasticity'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getElasticity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getElasticity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setElasticity of class  CCPhysicsShape */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_setElasticity00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_setElasticity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsShape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsShape* self = (CCPhysicsShape*)  tolua_tousertype(tolua_S,1,0);
  float elasticity = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setElasticity'", NULL);
#endif
  {
   self->setElasticity(elasticity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setElasticity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFriction of class  CCPhysicsShape */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_getFriction00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_getFriction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsShape",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsShape* self = (CCPhysicsShape*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFriction'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getFriction();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFriction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFriction of class  CCPhysicsShape */
#ifndef TOLUA_DISABLE_tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_setFriction00
static int tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_setFriction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPhysicsShape",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPhysicsShape* self = (CCPhysicsShape*)  tolua_tousertype(tolua_S,1,0);
  float friction = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFriction'", NULL);
#endif
  {
   self->setFriction(friction);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFriction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_CCPhysicsWorld_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"CCPhysicsWorld","CCPhysicsWorld","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCPhysicsWorld");
   tolua_function(tolua_S,"create",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_create00);
   tolua_function(tolua_S,"create",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_create01);
   tolua_function(tolua_S,"createDebugNode",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createDebugNode00);
   tolua_function(tolua_S,"getGravity",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_getGravity00);
   tolua_function(tolua_S,"setGravity",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_setGravity00);
   tolua_function(tolua_S,"createCircleBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createCircleBody00);
   tolua_function(tolua_S,"createBoxBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createBoxBody00);
   tolua_function(tolua_S,"createPolygonBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createPolygonBody00);
   tolua_function(tolua_S,"createPolygonBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_createPolygonBody01);
   tolua_function(tolua_S,"addBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_addBody00);
   tolua_function(tolua_S,"getBodyByTag",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_getBodyByTag00);
   tolua_function(tolua_S,"removeBodyByTag",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeBodyByTag00);
   tolua_function(tolua_S,"removeBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeBody00);
   tolua_function(tolua_S,"removeAllBodies",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_removeAllBodies00);
   tolua_function(tolua_S,"start",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_start00);
   tolua_function(tolua_S,"stop",tolua_CCPhysicsWorld_luabinding_CCPhysicsWorld_stop00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCPhysicsBody","CCPhysicsBody","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCPhysicsBody");
   tolua_function(tolua_S,"defaultStaticBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_defaultStaticBody00);
   tolua_function(tolua_S,"createStaticBody",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_createStaticBody00);
   tolua_function(tolua_S,"create",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_create00);
   tolua_function(tolua_S,"getTag",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getTag00);
   tolua_function(tolua_S,"setTag",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setTag00);
   tolua_function(tolua_S,"getMass",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getMass00);
   tolua_function(tolua_S,"setMass",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setMass00);
   tolua_function(tolua_S,"getInertia",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getInertia00);
   tolua_function(tolua_S,"setInertia",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setInertia00);
   tolua_function(tolua_S,"getVelocity",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocity00);
   tolua_function(tolua_S,"getVelocity",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocity01);
   tolua_function(tolua_S,"setVelocity",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocity00);
   tolua_function(tolua_S,"setVelocity",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocity01);
   tolua_function(tolua_S,"getVelocityLimit",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getVelocityLimit00);
   tolua_function(tolua_S,"setVelocityLimit",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setVelocityLimit00);
   tolua_function(tolua_S,"getAngleVelocity",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngleVelocity00);
   tolua_function(tolua_S,"setAngleVelocity",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngleVelocity00);
   tolua_function(tolua_S,"getAngleVelocityLimit",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngleVelocityLimit00);
   tolua_function(tolua_S,"setAngleVelocityLimit",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngleVelocityLimit00);
   tolua_function(tolua_S,"getForce",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getForce00);
   tolua_function(tolua_S,"getForce",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getForce01);
   tolua_function(tolua_S,"setForce",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setForce00);
   tolua_function(tolua_S,"setForce",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setForce01);
   tolua_function(tolua_S,"getTorque",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getTorque00);
   tolua_function(tolua_S,"setTorque",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setTorque00);
   tolua_function(tolua_S,"getPosition",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getPosition00);
   tolua_function(tolua_S,"getPosition",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getPosition01);
   tolua_function(tolua_S,"setPosition",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setPosition00);
   tolua_function(tolua_S,"setPosition",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setPosition01);
   tolua_function(tolua_S,"getAngle",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getAngle00);
   tolua_function(tolua_S,"setAngle",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setAngle00);
   tolua_function(tolua_S,"getRotation",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_getRotation00);
   tolua_function(tolua_S,"setRotation",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_setRotation00);
   tolua_function(tolua_S,"bindNode",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_bindNode00);
   tolua_function(tolua_S,"unbind",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_unbind00);
   tolua_function(tolua_S,"addSegmentShape",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addSegmentShape00);
   tolua_function(tolua_S,"addCircleShape",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addCircleShape00);
   tolua_function(tolua_S,"addBoxShape",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addBoxShape00);
   tolua_function(tolua_S,"addPolygonShape",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addPolygonShape00);
   tolua_function(tolua_S,"addPolygonShape",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_addPolygonShape01);
   tolua_function(tolua_S,"removeShapeAtIndex",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeShapeAtIndex00);
   tolua_function(tolua_S,"removeShape",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeShape00);
   tolua_function(tolua_S,"removeAllShape",tolua_CCPhysicsWorld_luabinding_CCPhysicsBody_removeAllShape00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCPhysicsShape","CCPhysicsShape","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCPhysicsShape");
   tolua_function(tolua_S,"getElasticity",tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_getElasticity00);
   tolua_function(tolua_S,"setElasticity",tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_setElasticity00);
   tolua_function(tolua_S,"getFriction",tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_getFriction00);
   tolua_function(tolua_S,"setFriction",tolua_CCPhysicsWorld_luabinding_CCPhysicsShape_setFriction00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCPhysicsDebugNode","CCPhysicsDebugNode","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCPhysicsDebugNode");
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_CCPhysicsWorld_luabinding (lua_State* tolua_S) {
 return tolua_CCPhysicsWorld_luabinding_open(tolua_S);
};
#endif
