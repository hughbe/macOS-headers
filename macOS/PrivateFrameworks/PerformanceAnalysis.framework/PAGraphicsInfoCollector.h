//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, PAMemorySimpleGraphicsSummary;

@interface PAGraphicsInfoCollector : NSObject <NSCoding>
{
    NSMutableDictionary *processToGraphicsSummary;
    PAMemorySimpleGraphicsSummary *systemGraphicsSummary;
    BOOL hasData;
}

+ (BOOL)collectionSupported;
+ (id)collector;
@property(readonly) BOOL hasData; // @synthesize hasData;
@property(readonly) NSDictionary *processToGraphicsSummary; // @synthesize processToGraphicsSummary;
@property(readonly) PAMemorySimpleGraphicsSummary *systemGraphicsSummary; // @synthesize systemGraphicsSummary;
- (void)dealloc;
- (void)_refreshGraphicsDataForAllocations:(id)arg1 forProcesses:(id)arg2;
- (BOOL)collectDataForProcesses:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

