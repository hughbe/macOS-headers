//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKAuthorizationTVServicePresenter : NSObject
{
}

- (id)_filterDeprecatedType:(id)arg1;
- (id)_stringForType:(long long)arg1;
- (long long)_typeFromString:(id)arg1;
- (id)buildFetchAppIconReplyWithImageData:(id)arg1 imageScale:(id)arg2;
- (id)buildFetchAppIconMessage;
- (id)buildDidStartServerAuthorizationMessage;
- (id)buildDidTapNotificationMessage;
- (long long)typeOfMessage:(id)arg1;

@end

