//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKFontChooserUserInterfaceItem-Protocol.h>
#import <AnnotationKit/AKUserInterfaceItem-Protocol.h>

@class AKTextAttributesViewController, NSString;

@interface AKFontChooserUIItemDelegate : NSObject <AKUserInterfaceItem, AKFontChooserUserInterfaceItem>
{
    AKTextAttributesViewController *_parentController;
}

- (void).cxx_destruct;
@property __weak AKTextAttributesViewController *parentController; // @synthesize parentController=_parentController;
- (void)syncFontsToUI:(id)arg1;
- (id)convertFont:(id)arg1;
- (long long)tag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

