//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/ENNoteStoreClient.h>

@class ENLinkedNotebookRef;
@protocol ENLinkedNoteStoreClientDelegate;

@interface ENLinkedNoteStoreClient : ENNoteStoreClient
{
    id <ENLinkedNoteStoreClientDelegate> _delegate;
    ENLinkedNotebookRef *_linkedNotebookRef;
}

+ (id)noteStoreClientForLinkedNotebookRef:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ENLinkedNotebookRef *linkedNotebookRef; // @synthesize linkedNotebookRef=_linkedNotebookRef;
@property(nonatomic) __weak id <ENLinkedNoteStoreClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)noteStoreUrl;
- (id)authenticationToken;

@end

