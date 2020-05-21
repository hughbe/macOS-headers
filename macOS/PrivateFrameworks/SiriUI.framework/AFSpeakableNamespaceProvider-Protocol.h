//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFBulletin, AceObject, NSString, NSURL;

@protocol AFSpeakableNamespaceProvider <NSObject>
- (NSString *)stringForExpression:(NSString *)arg1;

@optional
- (NSURL *)attachmentURLForExpression:(NSString *)arg1;
- (void)setAssistantBulletin:(AFBulletin *)arg1;
- (NSString *)identifier;
- (id)initWithAceObject:(AceObject *)arg1;
- (NSString *)stringForExpression:(NSString *)arg1 containsPrivacySensitiveContents:(char *)arg2;
@end

