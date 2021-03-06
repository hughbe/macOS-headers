//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class GKEntity, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKPhysicsBody, SKReachConstraints, SKScene;

@interface SKNode : NSResponder <NSCopying, NSSecureCoding>
{
    struct SKCNode *_skcNode;
    SKNode *_parent;
    NSMutableArray *_children;
    NSMutableArray *_actions;
    NSMutableDictionary *_keyedActions;
    NSMutableDictionary *_keyedSubSprites;
    NSMutableDictionary *_info;
    NSMutableDictionary *_attributeValues;
    NSString *_name;
    NSMutableDictionary *_userData;
    NSArray *_constraints;
    unsigned int _version;
    BOOL _userInteractionEnabled;
    BOOL __explicitlySetIsAccessibilityElement;
    BOOL _accessibilityElement;
    BOOL _accessibilityEnabled;
    BOOL _performFullCapture;
    SKReachConstraints *_reachConstraints;
    long long _focusBehavior;
    NSString *_accessibilityRole;
    NSString *_accessibilityRoleDescription;
    NSString *_accessibilitySubrole;
    id _accessibilityParent;
    NSArray *_accessibilityChildren;
    NSString *_accessibilityHelp;
    NSString *_accessibilityLabel;
    GKEntity *_entity;
    struct CGRect _accessibilityFrame;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3;
+ (id)debugHierarchyChildGroupingID;
+ (id)nodeWithFileNamed:(id)arg1 securelyWithClasses:(id)arg2 andError:(id *)arg3;
+ (id)nodeWithFileNamed:(id)arg1;
+ (id)node;
+ (BOOL)supportsSecureCoding;
+ (id)nodeFromCaptureData:(id)arg1;
- (void).cxx_destruct;
@property BOOL performFullCapture; // @synthesize performFullCapture=_performFullCapture;
@property(nonatomic) __weak GKEntity *entity; // @synthesize entity=_entity;
@property(nonatomic, getter=isAccessibilityEnabled) BOOL accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityHelp; // @synthesize accessibilityHelp=_accessibilityHelp;
@property(copy, nonatomic) NSArray *accessibilityChildren; // @synthesize accessibilityChildren=_accessibilityChildren;
@property(nonatomic) __weak id accessibilityParent; // @synthesize accessibilityParent=_accessibilityParent;
@property(nonatomic) struct CGRect accessibilityFrame; // @synthesize accessibilityFrame=_accessibilityFrame;
@property(copy, nonatomic) NSString *accessibilitySubrole; // @synthesize accessibilitySubrole=_accessibilitySubrole;
@property(copy, nonatomic) NSString *accessibilityRoleDescription; // @synthesize accessibilityRoleDescription=_accessibilityRoleDescription;
@property(copy, nonatomic) NSString *accessibilityRole; // @synthesize accessibilityRole=_accessibilityRole;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(nonatomic) long long focusBehavior; // @synthesize focusBehavior=_focusBehavior;
@property(copy, nonatomic) SKReachConstraints *reachConstraints; // @synthesize reachConstraints=_reachConstraints;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isAccessibilityElement) BOOL accessibilityElement; // @synthesize accessibilityElement=_accessibilityElement;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;
@property(copy, nonatomic) NSDictionary *attributeValues;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalAccumulatedBoundingVerts;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalBoundingVerts;
- (void)dealloc;
- (BOOL)hasUniformAlphaAndIsVisible;
- (BOOL)intersectsNode:(id)arg1;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;
- (id)nodesAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(BOOL)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1 withRadius:(double)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(nonatomic, getter=isHidden) BOOL hidden;
- (void)setScale:(double)arg1;
@property(nonatomic) double yScale;
@property(nonatomic) double xScale;
@property(nonatomic) double yRotation;
@property(nonatomic) double xRotation;
@property(nonatomic) double zRotation;
@property(nonatomic) double zPosition;
- (struct CGRect)calculateAccumulatedFrame;
@property(nonatomic) struct CGPoint position;
- (id)physicsField;
@property(retain, nonatomic) SKPhysicsBody *physicsBody;
- (id)description;
- (BOOL)needsUpdate;
- (BOOL)hasActions;
- (id)containingView;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void)runAction:(id)arg1 withKey:(id)arg2;
@property(nonatomic) double alpha;
@property(nonatomic) double speed;
- (void)runAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runAction:(id)arg1;
- (void)runAction:(id)arg1;
- (void)_descendantsWithPredicate:(CDUnknownBlockType)arg1 toMutableArray:(id)arg2;
- (id)_descendantsWithPredicate:(CDUnknownBlockType)arg1;
- (void)_descendantsToMutableArray:(id)arg1;
- (id)_descendants;
@property(readonly, nonatomic) NSArray *children;
- (BOOL)hasChildren;
- (void)_processSearchTokens:(vector_408ca79d)arg1 visited:(set_3449d313 *)arg2 usingBlock:(CDUnknownBlockType)arg3 stopPointer:(char *)arg4;
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 stopPointer:(char *)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)childNodeWithName:(id)arg1;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
@property(copy, nonatomic) NSArray *constraints;
- (void)_performCleanup;
- (void)removeAllChildren;
- (void)removeChildrenInArray:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)removeChildAtIndex:(long long)arg1;
@property(readonly, nonatomic) struct CGRect frame;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
- (BOOL)inParentHierarchy:(id)arg1;
@property(readonly, nonatomic) const struct CGPath *outline;
@property(readonly, nonatomic) SKNode *parent;
@property(readonly, nonatomic) SKScene *scene;
- (void)_update:(double)arg1;
- (void)moveToParent:(id)arg1;
- (void)removeFromParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (void)_initAccessibility;
- (id)initWithCoder:(id)arg1;
- (Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2;
- (id)init;
- (void)_didMakeBackingNode;
@property(readonly, nonatomic) struct SKCNode *_backingNode;
- (struct SKCNode *)_makeBackingNode;
- (BOOL)isEqualToNode:(id)arg1;
@property(readonly, nonatomic) shared_ptr_11a7378b _aether;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityNotifiesWhenDestroyed;
- (void)_removeChild:(id)arg1;
- (void)_removeAction:(id)arg1;
- (id)createDebugHierarchyVisualRepresentation;
- (struct CGRect)_convertFrameToView:(id)arg1;
- (id)_copyImageData;
@property(readonly, nonatomic) NSArray *_allActions;
- (BOOL)_pathFromPhysicsBodyToPoints:(MISSING_TYPE ***)arg1 outSize:(unsigned long long *)arg2;
- (id)_subnodeFromIndexPath:(id)arg1;
- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(BOOL)arg2;
- (BOOL)intersectsNode:(id)arg1 useAlphaTest:(BOOL)arg2;
@property(readonly, nonatomic) struct CGSize _size;
@property(nonatomic) struct CGPoint _anchorPoint;
@property(readonly, nonatomic) struct CGSize _untransformedSize;
@property(readonly, nonatomic) struct CGRect _untransformedBounds;
@property(nonatomic) BOOL _showBounds;
@property(retain, nonatomic) NSMutableDictionary *_info;
- (id)childrenInRect:(struct CGRect)arg1;
- (void)updatePhysicsPositionAndScaleFromSprite;
- (void)_getBasePhysicsScale:(float *)arg1 yScale:(float *)arg2;
- (void)_getWorldTransform:(float *)arg1 positionY:(float *)arg2 rotation:(float *)arg3 xScale:(float *)arg4 yScale:(float *)arg5;
- (void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2;
- (void)_debugPrint:(int)arg1;
- (void)debugPrint;
- (id)archiveToFile:(id)arg1;
- (id)createFullCaptureData;
- (void)setParent:(id)arg1;

@end

