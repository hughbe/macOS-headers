//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDBorder.h>

__attribute__((visibility("hidden")))
@interface EPBorder : EDBorder
{
    unsigned long long mPrecedence;
}

+ (id)borderWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;
- (unsigned long long)precedence;
- (BOOL)isEqualToBorder:(id)arg1;
- (id)initWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;

@end

