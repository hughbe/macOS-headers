//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailUI/WKUIDelegate-Protocol.h>

@class NSData, NSDictionary, NSEvent, NSMenu, NSString, NSURL, WKFrameInfo, WKNavigationAction, WKSecurityOrigin, WKWebView, WKWebViewConfiguration, WKWindowFeatures, _WKAttachment, _WKContextMenuElementInfo, _WKFrameHandle, _WKHitTestResult, _WKInspector, _WKWebAuthenticationPanel;
@protocol NSSecureCoding;

@protocol WKUIDelegatePrivate <WKUIDelegate>

@optional
- (void)_webView:(WKWebView *)arg1 didAttachInspector:(_WKInspector *)arg2;
- (void)_webView:(WKWebView *)arg1 didPerformDragOperation:(BOOL)arg2;
- (void)_webView:(WKWebView *)arg1 getContextMenuFromProposedMenu:(NSMenu *)arg2 forElement:(_WKContextMenuElementInfo *)arg3 userInfo:(id <NSSecureCoding>)arg4 completionHandler:(void (^)(NSMenu *))arg5;
- (NSMenu *)_webView:(WKWebView *)arg1 contextMenu:(NSMenu *)arg2 forElement:(_WKContextMenuElementInfo *)arg3 userInfo:(id <NSSecureCoding>)arg4;
- (NSMenu *)_webView:(WKWebView *)arg1 contextMenu:(NSMenu *)arg2 forElement:(_WKContextMenuElementInfo *)arg3;
- (void)_webView:(WKWebView *)arg1 unavailablePlugInButtonClickedWithReason:(long long)arg2 plugInInfo:(NSDictionary *)arg3;
- (void)_webView:(WKWebView *)arg1 setWindowFrame:(struct CGRect)arg2;
- (void)_webView:(WKWebView *)arg1 getWindowFrameWithCompletionHandler:(void (^)(struct CGRect))arg2;
- (void)_webView:(WKWebView *)arg1 setResizable:(BOOL)arg2;
- (void)_webView:(WKWebView *)arg1 didExceedBackgroundResourceLimitWhileInForeground:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 mouseDidMoveOverElement:(_WKHitTestResult *)arg2 withFlags:(unsigned long long)arg3 userInfo:(id <NSSecureCoding>)arg4;
- (void)_webView:(WKWebView *)arg1 requestNotificationPermissionForSecurityOrigin:(WKSecurityOrigin *)arg2 decisionHandler:(void (^)(BOOL))arg3;
- (void)_webView:(WKWebView *)arg1 drawFooterInRect:(struct CGRect)arg2 forPageWithTitle:(NSString *)arg3 URL:(NSURL *)arg4;
- (void)_webView:(WKWebView *)arg1 drawHeaderInRect:(struct CGRect)arg2 forPageWithTitle:(NSString *)arg3 URL:(NSURL *)arg4;
- (double)_webViewFooterHeight:(WKWebView *)arg1;
- (double)_webViewHeaderHeight:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 saveDataToFile:(NSData *)arg2 suggestedFilename:(NSString *)arg3 mimeType:(NSString *)arg4 originatingURL:(NSURL *)arg5;
- (void)_webView:(WKWebView *)arg1 getToolbarsAreVisibleWithCompletionHandler:(void (^)(BOOL))arg2;
- (void)_webView:(WKWebView *)arg1 didClickAutoFillButtonWithUserInfo:(id <NSSecureCoding>)arg2;
- (void)_webView:(WKWebView *)arg1 handleAutoplayEvent:(long long)arg2 withFlags:(unsigned long long)arg3;
- (void)_webView:(WKWebView *)arg1 didNotHandleWheelEvent:(NSEvent *)arg2;
- (void)_webViewRunModal:(WKWebView *)arg1;
- (void)_webViewDidScroll:(WKWebView *)arg1;
- (void)_unfocusWebView:(WKWebView *)arg1;
- (void)_focusWebView:(WKWebView *)arg1;
- (void)_showWebView:(WKWebView *)arg1;
- (void)_completeImmediateActionAnimationForWebView:(WKWebView *)arg1;
- (void)_cancelImmediateActionAnimationForWebView:(WKWebView *)arg1;
- (void)_prepareForImmediateActionAnimationForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 runWebAuthenticationPanel:(_WKWebAuthenticationPanel *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)_webView:(WKWebView *)arg1 takeFocus:(long long)arg2;
- (void)_webView:(WKWebView *)arg1 didChangeFontAttributes:(NSDictionary *)arg2;
- (void)_webView:(WKWebView *)arg1 requestStorageAccessPanelForDomain:(NSString *)arg2 underCurrentDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)_webView:(WKWebView *)arg1 didResignInputElementStrongPasswordAppearanceWithUserInfo:(id <NSSecureCoding>)arg2;
- (void)_webView:(WKWebView *)arg1 didInvalidateDataForAttachment:(_WKAttachment *)arg2;
- (void)_webView:(WKWebView *)arg1 didInsertAttachment:(_WKAttachment *)arg2 withSource:(NSString *)arg3;
- (void)_webView:(WKWebView *)arg1 didRemoveAttachment:(_WKAttachment *)arg2;
- (void)_webView:(WKWebView *)arg1 editorStateDidChange:(NSDictionary *)arg2;
- (void)_webView:(WKWebView *)arg1 runBeforeUnloadConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)_webView:(WKWebView *)arg1 requestGeolocationPermissionForFrame:(WKFrameInfo *)arg2 decisionHandler:(void (^)(BOOL))arg3;
- (void)_webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4 completionHandler:(void (^)(WKWebView *))arg5;
- (unsigned long long)_webView:(WKWebView *)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)_webView:(WKWebView *)arg1 mediaCaptureStateDidChange:(unsigned long long)arg2;
- (void)_webView:(WKWebView *)arg1 checkUserMediaPermissionForURL:(NSURL *)arg2 mainFrameURL:(NSURL *)arg3 frameIdentifier:(unsigned long long)arg4 decisionHandler:(void (^)(NSString *, BOOL))arg5;
- (void)_webView:(WKWebView *)arg1 requestUserMediaAuthorizationForDevices:(unsigned long long)arg2 url:(NSURL *)arg3 mainFrameURL:(NSURL *)arg4 decisionHandler:(void (^)(BOOL))arg5;
- (void)_webView:(WKWebView *)arg1 includeSensitiveMediaDeviceDetails:(void (^)(BOOL))arg2;
- (void)_webView:(WKWebView *)arg1 requestMediaCaptureAuthorization:(unsigned long long)arg2 decisionHandler:(void (^)(BOOL))arg3;
- (NSDictionary *)_dataDetectionContextForWebView:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 imageOrMediaDocumentSizeChanged:(struct CGSize)arg2;
- (void)_webView:(WKWebView *)arg1 hasVideoInPictureInPictureDidChange:(BOOL)arg2;
- (void)_webViewDidLosePointerLock:(WKWebView *)arg1;
- (void)_webViewDidShowSafeBrowsingWarning:(WKWebView *)arg1;
- (void)_webViewDidRequestPointerLock:(WKWebView *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)_webViewRequestPointerLock:(WKWebView *)arg1;
- (void)_webViewDidExitFullscreen:(WKWebView *)arg1;
- (void)_webViewDidEnterFullscreen:(WKWebView *)arg1;
- (void)_webViewFullscreenMayReturnToInline:(WKWebView *)arg1;
- (void)_webViewClose:(WKWebView *)arg1;
- (void)_webView:(WKWebView *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (void)_webView:(WKWebView *)arg1 decideWebApplicationCacheQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 totalBytesNeeded:(unsigned long long)arg4 decisionHandler:(void (^)(unsigned long long))arg5;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 databaseName:(NSString *)arg3 displayName:(NSString *)arg4 currentQuota:(unsigned long long)arg5 currentOriginUsage:(unsigned long long)arg6 currentDatabaseUsage:(unsigned long long)arg7 expectedUsage:(unsigned long long)arg8 decisionHandler:(void (^)(unsigned long long))arg9;
- (void)_webView:(WKWebView *)arg1 decideDatabaseQuotaForSecurityOrigin:(WKSecurityOrigin *)arg2 currentQuota:(unsigned long long)arg3 currentOriginUsage:(unsigned long long)arg4 currentDatabaseUsage:(unsigned long long)arg5 expectedUsage:(unsigned long long)arg6 decisionHandler:(void (^)(unsigned long long))arg7;
@end

