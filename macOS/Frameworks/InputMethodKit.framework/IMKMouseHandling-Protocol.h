//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol IMKMouseHandling
- (BOOL)mouseMovedOnCharacterIndex:(unsigned long long)arg1 coordinate:(struct CGPoint)arg2 withModifier:(unsigned long long)arg3 client:(id)arg4;
- (BOOL)mouseUpOnCharacterIndex:(unsigned long long)arg1 coordinate:(struct CGPoint)arg2 withModifier:(unsigned long long)arg3 client:(id)arg4;
- (BOOL)mouseDownOnCharacterIndex:(unsigned long long)arg1 coordinate:(struct CGPoint)arg2 withModifier:(unsigned long long)arg3 continueTracking:(char *)arg4 client:(id)arg5;
@end

