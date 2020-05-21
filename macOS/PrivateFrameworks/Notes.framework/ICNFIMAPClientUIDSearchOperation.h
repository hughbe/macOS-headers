//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFIMAPClientUIDOperation.h>

@class NSArray, NSMutableIndexSet;

@interface ICNFIMAPClientUIDSearchOperation : ICNFIMAPClientUIDOperation
{
    NSArray *_terms;
    NSMutableIndexSet *_matchingUIDs;
}

- (void).cxx_destruct;
@property(retain) NSMutableIndexSet *matchingUIDs; // @synthesize matchingUIDs=_matchingUIDs;
@property(copy) NSArray *terms; // @synthesize terms=_terms;
- (BOOL)executeOnConnection:(id)arg1;
- (id)_newArgumentForSearchTerm:(id)arg1 isLiteral:(char *)arg2;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)activityString;
- (id)commandTypeString;
- (id)debugCommandString;
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2;
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2;
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 terms:(id)arg3;

@end

