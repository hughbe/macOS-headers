//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray;

@interface PXImportSessionInfo : NSObject
{
    BOOL _importComplete;
    BOOL _importStopped;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_itemsToImport;
    NSMutableArray *_importedItems;
    NSMutableArray *_errorItems;
    long long _completedItemsCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long completedItemsCount; // @synthesize completedItemsCount=_completedItemsCount;
@property(retain, nonatomic) NSMutableArray *errorItems; // @synthesize errorItems=_errorItems;
@property(retain, nonatomic) NSMutableArray *importedItems; // @synthesize importedItems=_importedItems;
@property(nonatomic) BOOL importStopped; // @synthesize importStopped=_importStopped;
@property(nonatomic) BOOL importComplete; // @synthesize importComplete=_importComplete;
@property(retain, nonatomic) NSArray *itemsToImport; // @synthesize itemsToImport=_itemsToImport;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

@end

