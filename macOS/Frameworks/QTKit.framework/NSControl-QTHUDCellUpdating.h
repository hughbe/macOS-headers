//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

@interface NSControl (QTHUDCellUpdating)
- (void)QTHUD_updateCellInside:(id)arg1 forAction:(void *)arg2;
- (void)QTHUD_updateCell:(id)arg1 forAction:(void *)arg2;
- (struct CGRect)QTHUD_frameForCell:(id)arg1;
- (void)takeCMTimeValueFrom:(id)arg1;
- (void)setCMTimeValue:(CDStruct_198678f7)arg1;
- (CDStruct_198678f7)CMTimeValue;
- (void)takeQTTimeValueFrom:(id)arg1;
- (void)setQTTimeValue:(CDStruct_2ec95fd7)arg1;
- (CDStruct_2ec95fd7)QTTimeValue;
@end

