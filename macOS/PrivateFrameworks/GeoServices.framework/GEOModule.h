//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOModuleOptions, GEOPDModule;

@interface GEOModule : NSObject
{
    GEOPDModule *_module;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOModuleOptions *options;
@property(readonly, nonatomic) int type;
- (id)initWithModule:(id)arg1;

@end

