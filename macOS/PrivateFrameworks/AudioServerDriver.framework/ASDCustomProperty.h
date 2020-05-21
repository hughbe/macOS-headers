//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDObject, ASDPropertyAddress;

@interface ASDCustomProperty : NSObject
{
    BOOL _settable;
    unsigned int _propertyDataType;
    unsigned int _qualifierDataType;
    ASDPropertyAddress *_address;
    ASDObject *_owner;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ASDObject *owner; // @synthesize owner=_owner;
@property(nonatomic, getter=isSettable) BOOL settable; // @synthesize settable=_settable;
@property(readonly, nonatomic) unsigned int qualifierDataType; // @synthesize qualifierDataType=_qualifierDataType;
@property(readonly, nonatomic) unsigned int propertyDataType; // @synthesize propertyDataType=_propertyDataType;
@property(readonly, copy, nonatomic) ASDPropertyAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) id value;
@property(readonly, nonatomic) unsigned int element;
@property(readonly, nonatomic) unsigned int scope;
@property(readonly, nonatomic) unsigned int selector;
- (void)sendPropertyChangeNotification;
- (BOOL)setPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void *)arg2 dataSize:(unsigned int)arg3 andData:(const void *)arg4 forClient:(int)arg5;
- (BOOL)getPropertyWithQualifierSize:(unsigned int)arg1 qualifierData:(const void *)arg2 dataSize:(unsigned int *)arg3 andData:(void *)arg4 forClient:(int)arg5;
- (unsigned int)dataSizeWithQualifierSize:(unsigned int)arg1 andQualifierData:(const void *)arg2;
- (id)initWithAddress:(id)arg1 propertyDataType:(unsigned int)arg2 qualifierDataType:(unsigned int)arg3;
- (id)initWithSelector:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 propertyDataType:(unsigned int)arg4 andQualifierDataType:(unsigned int)arg5;
- (id)initWithSelector:(unsigned int)arg1 propertyDataType:(unsigned int)arg2 andQualifierDataType:(unsigned int)arg3;
- (id)init;

@end

