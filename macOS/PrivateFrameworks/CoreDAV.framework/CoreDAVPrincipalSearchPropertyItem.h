//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem
{
    CoreDAVItem *_prop;
    CoreDAVLeafItem *_descriptionItem;
}

+ (id)copyParseRules;
- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVLeafItem *descriptionItem; // @synthesize descriptionItem=_descriptionItem;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
- (id)description;
- (id)init;

@end

