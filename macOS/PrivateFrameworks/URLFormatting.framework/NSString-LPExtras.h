//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (LPExtras)
+ (void)_lp_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_lp_userVisibleHost;
- (id)_lp_hostByStrippingTopLevelDomain;
- (id)_lp_stringForcingLeftToRightDirection;
- (BOOL)_lp_hasCaseInsensitivePrefix:(id)arg1;
- (id)_lp_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(BOOL)arg2;
- (id)_lp_highLevelDomainFromHost;
- (unsigned long long)_lp_lengthOfDeepSubdomainsFromComponents:(id)arg1;
- (id)_lp_highLevelDomainFromComponents:(id)arg1 indexOfFirstHighLevelDomainComponent:(unsigned long long *)arg2 indexOfFirstTopLevelDomainComponent:(unsigned long long *)arg3;
- (BOOL)_lp_hasCaseInsensitiveSubstring:(id)arg1 startingAt:(unsigned long long)arg2;
@end

