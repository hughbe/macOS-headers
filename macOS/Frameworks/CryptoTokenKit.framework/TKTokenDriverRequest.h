//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSExtensionRequestHandling-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TKTokenDriverRequest : NSObject <NSExtensionRequestHandling>
{
}

- (void)beginRequestWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

