//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegendEntry : NSObject
{
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (void).cxx_destruct;
- (id)description;
- (void)setEntryIndex:(unsigned int)arg1;
- (unsigned int)entryIndex;
- (void)setFont:(id)arg1;
- (id)font;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;

@end

