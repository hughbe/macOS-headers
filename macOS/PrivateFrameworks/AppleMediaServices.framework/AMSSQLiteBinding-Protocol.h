//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@protocol AMSSQLiteBinding <NSObject>
- (int)clearBindings;
- (void)bindDictionary:(NSDictionary *)arg1 atPosition:(int)arg2;
- (void)bindArray:(NSArray *)arg1 atPosition:(int)arg2;
- (void)bindURL:(NSURL *)arg1 atPosition:(int)arg2;
- (void)bindDate:(NSDate *)arg1 atPosition:(int)arg2;
- (void)bindStringCopy:(NSString *)arg1 atPosition:(int)arg2;
- (void)bindDataCopy:(NSData *)arg1 atPosition:(int)arg2;
- (void)bindString:(NSString *)arg1 atPosition:(int)arg2;
- (void)bindData:(NSData *)arg1 atPosition:(int)arg2;
- (void)bindNumber:(NSNumber *)arg1 atPosition:(int)arg2;
- (void)bindNullAtPosition:(int)arg1;
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;
- (void)bindInt:(int)arg1 atPosition:(int)arg2;
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;
@end

