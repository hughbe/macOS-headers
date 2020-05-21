//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/KHProjectBrowserSectionInfo-Protocol.h>

@class NSMutableArray, NSString;

@interface KHProjectBrowserSection : NSObject <KHProjectBrowserSectionInfo>
{
    long long _projectType;
    NSMutableArray *_items;
    unsigned long long _offset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long projectType; // @synthesize projectType=_projectType;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (id)initWithProjectType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

