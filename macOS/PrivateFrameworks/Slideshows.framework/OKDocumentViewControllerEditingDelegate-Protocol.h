//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, OKDocumentViewController, OKDocumentWidget;

@protocol OKDocumentViewControllerEditingDelegate <NSObject>

@optional
- (void)documentViewController:(OKDocumentViewController *)arg1 willChangeFocusForTextWidget:(OKDocumentWidget *)arg2 toFocusState:(BOOL)arg3;
- (void)documentViewController:(OKDocumentViewController *)arg1 didChangeTextForWidget:(OKDocumentWidget *)arg2 toSettings:(NSDictionary *)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 shouldChangeTextForWidget:(OKDocumentWidget *)arg2 toSettings:(NSMutableDictionary *)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 canEditTextForWidget:(OKDocumentWidget *)arg2;
- (void)documentViewController:(OKDocumentViewController *)arg1 didPanMediaForWidget:(OKDocumentWidget *)arg2 toOffset:(struct CGPoint)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 shouldPanMediaForWidget:(OKDocumentWidget *)arg2 toOffset:(struct CGPoint)arg3;
- (BOOL)documentViewController:(OKDocumentViewController *)arg1 canPanMediaForWidget:(OKDocumentWidget *)arg2;
@end

