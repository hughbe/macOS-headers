//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CKLogic : NSObject
{
    MISSING_TYPE *body;
    MISSING_TYPE *negatedBody;
}

+ (id)ifNotExistsLink:(id)arg1 to:(id)arg2;
+ (id)ifExistsLink:(id)arg1 to:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)and:(id)arg1;
- (id)andNotExistsLink:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)andExistsLink:(id)arg1 to:(id)arg2 error:(id *)arg3;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) long long hash;

@end

