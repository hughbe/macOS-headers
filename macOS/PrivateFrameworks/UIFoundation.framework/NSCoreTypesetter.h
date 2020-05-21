//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSTypesetter.h>

@protocol NSCoreTypesetterDelegate;

@interface NSCoreTypesetter : NSTypesetter
{
    BOOL _wantsExtraLineFragment;
    CDUnknownBlockType laidOutLineFragment;
    id <NSCoreTypesetterDelegate> delegate;
    struct _NSRange characterRange;
    struct CGSize textContainerSize;
}

+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray *)arg1 ascender:(double *)arg2 descender:(double *)arg3;
+ (void)_lineMetricsFromAttributedString:(id)arg1 range:(struct _NSRange)arg2 typesetterBehavior:(long long)arg3 usesFontLeading:(_Bool)arg4 applySpacings:(_Bool)arg5 usesSystemFontLeading:(_Bool)arg6 usesNegativeFontLeading:(_Bool)arg7 lineHeight:(double *)arg8 baselineOffset:(double *)arg9 spacing:(double *)arg10 applicationFrameworkContext:(long long)arg11 wantsTextLineFragments:(BOOL)arg12;
+ (void)_lineMetricsForAttributes:(id)arg1 typesetterBehavior:(long long)arg2 usesFontLeading:(_Bool)arg3 applySpacings:(_Bool)arg4 usesSystemFontLeading:(_Bool)arg5 usesNegativeFontLeading:(_Bool)arg6 lineHeight:(double *)arg7 baselineOffset:(double *)arg8 spacing:(double *)arg9 applicationFrameworkContext:(long long)arg10 wantsTextLineFragments:(BOOL)arg11;
+ (BOOL)_supportsStringDrawingPath:(unsigned char)arg1;
- (void).cxx_destruct;
@property BOOL wantsExtraLineFragment; // @synthesize wantsExtraLineFragment=_wantsExtraLineFragment;
@property __weak id <NSCoreTypesetterDelegate> delegate; // @synthesize delegate;
@property(copy) CDUnknownBlockType laidOutLineFragment; // @synthesize laidOutLineFragment;
@property struct CGSize textContainerSize; // @synthesize textContainerSize;
@property struct _NSRange characterRange; // @synthesize characterRange;
- (struct CGRect)_stringDrawingCoreTextEngineWithOriginalString:(id)arg1 rect:(struct CGRect)arg2 padding:(double)arg3 graphicsContext:(id)arg4 forceClipping:(_Bool)arg5 attributes:(id)arg6 stringDrawingOptions:(long long)arg7 drawingContext:(id)arg8 wantsTextLineFragments:(BOOL)arg9 validatedAttributedString:(id)arg10 firstNonRenderedCharacterIndex:(long long *)arg11 foundSoftHyphenAtEOL:(char *)arg12 enginePathUsed:(unsigned char *)arg13;
- (int)_NSFastDrawString:(id)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 paragraphStyle:(id)arg4 typesetterBehavior:(long long)arg5 lineBreakMode:(unsigned long long)arg6 rect:(struct CGRect)arg7 padding:(double)arg8 graphicsContext:(id)arg9 baselineRendering:(BOOL)arg10 usesFontLeading:(BOOL)arg11 usesScreenFont:(BOOL)arg12 scrollable:(BOOL)arg13 syncAlignment:(BOOL)arg14 mirrored:(BOOL)arg15 boundingRectPointer:(struct CGRect *)arg16 baselineOffsetPointer:(double *)arg17 wantsTextLineFragments:(BOOL)arg18 drawingContext:(id)arg19;
- (void)layout;
- (void)dealloc;
- (id)init;

@end

