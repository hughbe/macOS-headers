//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHComponentGenerator.h>

@interface KHComponentGeneratorSpreadPanel : KHComponentGenerator
{
}

- (id)_singleLayoutForSection:(long long)arg1;
- (long long)numberOfSections;
- (double)heightWithBleedForSection:(long long)arg1;
- (double)heightForSection:(long long)arg1;
- (double)widthWithBleedForSection:(long long)arg1;
- (double)widthForSection:(long long)arg1;
- (id)photoFrames;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 renderingIntent:(unsigned long long)arg4 section:(long long)arg5 progressDelegate:(id)arg6;

@end

