//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SCRWebElementHistoryEntry : NSObject
{
    struct __AXUIElement *_axElement;
    struct __AXUIElement *_webAreaAXElement;
    NSDictionary *_storageDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *storageDictionary; // @synthesize storageDictionary=_storageDictionary;
@property(nonatomic) struct __AXUIElement *webAreaAXElement; // @synthesize webAreaAXElement=_webAreaAXElement;
@property(nonatomic) struct __AXUIElement *axElement; // @synthesize axElement=_axElement;
- (void)dealloc;

@end

