//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFViewController : NSObject
{
    PDFViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)markupStylePicker:(id)arg1 annotation:(id)arg2 setMarkupStyle:(unsigned long long)arg3;
- (void)_didEndChangingSelection;
- (void)_updateSelectionMarkups;
- (void)_selectionChanged;
- (void)trackMarqueeTextSelection:(id)arg1;
- (void)trackStandardTextSelection:(id)arg1;
- (BOOL)dragSelectionWithEvent:(id)arg1;
- (BOOL)shouldBeginDrag:(id)arg1;
- (void)choiceMenu:(id)arg1;
- (void)addComboBoxControlForAnnotation:(id)arg1 withEvent:(id)arg2;
- (void)trackMouse:(id)arg1 forPDFScannerResult:(id)arg2 onPage:(id)arg3;
- (void)trackMouse:(id)arg1 forAnnotation:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)_doButtonHit:(id)arg1;
- (void)_handleButtonHit:(id)arg1;
- (void)_postAnnotationHitNotification:(id)arg1;
- (void)_postAnnotationWillHitNotification:(id)arg1;
- (id)_pageViewForAnnotation:(id)arg1;
- (BOOL)isUpdatingSelectionMarkups;
- (void)removeNoteForAnnotation:(id)arg1;
- (void)editNoteForAnnotation:(id)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1 forAnnotation:(id)arg2;
- (void)setMarkupStyle:(unsigned long long)arg1 forSelection:(id)arg2 clearSelection:(_Bool)arg3;
- (_Bool)_shouldUpdateMarkupWithStyle:(unsigned long long)arg1 onPage:(id)arg2 forIndexSet:(id)arg3;
- (id)_annotationFollowing:(id)arg1 wrapAround:(BOOL)arg2;
- (id)_annotationPreceding:(id)arg1 wrapAround:(BOOL)arg2;
- (void)removeControlForAnnotation:(id)arg1;
- (void)_addControlForAnnotation:(id)arg1;
- (void)activateNextAnnotation:(BOOL)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)setActiveAnnotation:(id)arg1;
- (id)activeAnnotation;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPageView:(id)arg2;

@end

