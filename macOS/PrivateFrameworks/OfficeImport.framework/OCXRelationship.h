//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCXRelationship : NSObject
{
    NSString *mIdString;
    NSString *mType;
    NSString *mTarget;
    BOOL mExternal;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *target; // @synthesize target=mTarget;
@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;
@property(readonly, nonatomic) NSString *idString; // @synthesize idString=mIdString;
- (void)writeToStreamWriter:(id)arg1;
- (id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4;

@end

