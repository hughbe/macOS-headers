/* Generated by RuntimeBrowser.
 */

@protocol PXPhotosContentControllerDelegate <NSObject>

@required

- (void)dismissPresentedViewControllerForContentController:(PXPhotosContentController *)arg1;
- (void)needsUpdateForContentController:(PXPhotosContentController *)arg1;
- (void)photosContentController:(PXPhotosContentController *)arg1 presentViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (bool)photosContentController:(PXPhotosContentController *)arg1 pushViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (NSObject<PXAnonymousViewController> *)presentingViewControllerForContentController:(PXPhotosContentController *)arg1;

@end
