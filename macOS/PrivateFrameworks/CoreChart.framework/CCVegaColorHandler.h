//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaColorHandlerInterface-Protocol.h>

@protocol CCVegaRendererDelegate;

@interface CCVegaColorHandler : NSObject <CCVegaColorHandlerInterface>
{
    NSObject<CCVegaRendererDelegate> *delegate;
}

- (void).cxx_destruct;
@property __weak NSObject<CCVegaRendererDelegate> *delegate; // @synthesize delegate;
- (id)getPropertyOnObject:(id)arg1 named:(id)arg2;

@end

