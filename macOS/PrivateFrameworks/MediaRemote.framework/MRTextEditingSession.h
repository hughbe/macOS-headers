//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSMutableCopying-Protocol.h>

@class MRTextEditingAttributes, NSString;

@interface MRTextEditingSession : NSObject <NSMutableCopying>
{
    NSString *_text;
    BOOL _editing;
    MRTextEditingAttributes *_attributes;
    unsigned long long _uniqueIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MRTextEditingAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithText:(id)arg1 attributes:(id)arg2;

@end

