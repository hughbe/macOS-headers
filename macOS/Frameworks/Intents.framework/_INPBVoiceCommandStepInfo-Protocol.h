//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBVoiceCommandStepInfo <NSObject>
@property(readonly, nonatomic) BOOL hasName;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) BOOL hasCategory;
@property(nonatomic) int category;
@property(readonly, nonatomic) BOOL hasApplicationIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier;
- (int)StringAsCategory:(NSString *)arg1;
- (NSString *)categoryAsString:(int)arg1;
@end

