//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLRequest.h>

@interface SLInternalTencentWeiboRequest : SLRequest
{
    BOOL _shouldSign;
}

@property BOOL shouldSign; // @synthesize shouldSign=_shouldSign;
- (void)_addAuthenticationParameters:(id)arg1;
- (id)signedTencentRequestFromRequest:(id)arg1;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;

@end

