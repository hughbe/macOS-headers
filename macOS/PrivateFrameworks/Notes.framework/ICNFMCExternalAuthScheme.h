//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFMCAuthScheme.h>

@interface ICNFMCExternalAuthScheme : ICNFMCAuthScheme
{
}

+ (id)externalAuthScheme;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)supportedSaslMechanisms;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (unsigned int)applescriptScheme;
- (id)humanReadableName;
- (id)name;
- (void)dealloc;

@end

