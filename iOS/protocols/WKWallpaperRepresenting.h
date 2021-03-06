/* Generated by RuntimeBrowser.
 */

@protocol WKWallpaperRepresenting <WKHashable>

@required

- (unsigned long long)contentSource;
- (<WKFileBasedWallpaper> *)fileBasedWallpaperForLocation:(NSString *)arg1;
- (<WKFileBasedWallpaper> *)fileBasedWallpaperForLocation:(NSString *)arg1 andAppearance:(NSString *)arg2;
- (bool)hasDistinctWallpapersForLocations;
- (NSString *)identifierString;
- (bool)isAppearanceAware;
- (bool)isDynamicWallpaperBundle;
- (NSString *)name;
- (NSURL *)thumbnailImageURL;
- (<WKValueBasedWallpaper> *)valueBasedWallpaperForLocation:(NSString *)arg1;
- (<WKValueBasedWallpaper> *)valueBasedWallpaperForLocation:(NSString *)arg1 andAppearance:(NSString *)arg2;
- (unsigned long long)wallpaperBackingTypeForLocation:(NSString *)arg1;

@end
