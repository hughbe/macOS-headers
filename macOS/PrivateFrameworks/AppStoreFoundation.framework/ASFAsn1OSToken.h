//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreFoundation/ASFAsn1Token.h>

__attribute__((visibility("hidden")))
@interface ASFAsn1OSToken : ASFAsn1Token
{
    ASFAsn1Token *mValue;
}

- (void).cxx_destruct;
@property(readonly) ASFAsn1Token *value; // @synthesize value=mValue;
- (id)stringValue;
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(BOOL)arg5;

@end

