//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAccessibilityWebPageObjectBase : NSObject
{
    struct WebPage *m_page;
    ObjectIdentifier_8136369e m_pageID;
    id m_parent;
    _Bool m_hasMainFramePlugin;
}

- (id).cxx_construct;
- (id)accessibilityFocusedUIElement;
- (void)setRemoteParent:(id)arg1;
- (void)setHasMainFramePlugin:(_Bool)arg1;
- (void)setWebPage:(struct WebPage *)arg1;
- (id)accessibilityRootObjectWrapper;
- (id)accessibilityPluginObject;
- (struct AXObjectCache *)axObjectCache;

@end

