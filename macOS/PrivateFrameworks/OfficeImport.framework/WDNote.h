//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDCharacterRun, WDText;

__attribute__((visibility("hidden")))
@interface WDNote : WDRun
{
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithParagraph:(id)arg1 footnote:(BOOL)arg2;
- (int)runType;
- (void)setAutomaticNumbering:(BOOL)arg1;
- (BOOL)automaticNumbering;
- (id)reference;
- (id)text;

@end

