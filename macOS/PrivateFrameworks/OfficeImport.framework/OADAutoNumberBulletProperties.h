//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADBulletProperties.h>

__attribute__((visibility("hidden")))
@interface OADAutoNumberBulletProperties : OADBulletProperties
{
    int mSchemeType;
    unsigned long long mStartIndex;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)startIndex;
- (int)autoNumberSchemeType;
- (id)initWithAutoNumberSchemeType:(int)arg1 startIndex:(unsigned long long)arg2;

@end

