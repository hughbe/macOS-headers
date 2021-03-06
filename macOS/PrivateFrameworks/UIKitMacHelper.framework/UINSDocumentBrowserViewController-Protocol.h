//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitMacHelper/NSObject-Protocol.h>

@class NSArray, NSURL;
@protocol UINSDocumentBrowserViewControllerDelegate, UINSWindow;

@protocol UINSDocumentBrowserViewController <NSObject>
@property(nonatomic) __weak id <UINSWindow> window;
@property(copy, nonatomic) NSArray *customActions;
@property(nonatomic) BOOL allowsPickingMultipleItems;
@property(nonatomic) BOOL allowsDocumentCreation;
@property(retain, nonatomic) NSArray *documentTypes;
@property(nonatomic) __weak id <UINSDocumentBrowserViewControllerDelegate> delegate;
- (void)dismiss;
- (void)importDocumentAtURL:(NSURL *)arg1 nextToDocumentAtURL:(NSURL *)arg2 mode:(unsigned long long)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (void)revealDocumentAtURL:(NSURL *)arg1 importIfNeeded:(BOOL)arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (void)presentWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)presentWithCompletion:(void (^)(void))arg1;
@end

