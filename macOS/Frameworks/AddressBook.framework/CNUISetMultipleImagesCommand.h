//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/CNUIUndoableCommand.h>

@interface CNUISetMultipleImagesCommand : CNUIUndoableCommand
{
    BOOL _shouldSave;
    CDUnknownBlockType _didExecuteBlock;
    CNUIUndoableCommand *_aggregateCommand;
}

+ (id)makeAggregateCommandWithContactStore:(id)arg1 contacts:(id)arg2 imageData:(id)arg3 largeImageData:(id)arg4 clippingRect:(struct CGRect)arg5 ignoresGuardianRestrictions:(BOOL)arg6 shouldSave:(BOOL)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) CNUIUndoableCommand *aggregateCommand; // @synthesize aggregateCommand=_aggregateCommand;
@property(nonatomic) BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property(copy, nonatomic) CDUnknownBlockType didExecuteBlock; // @synthesize didExecuteBlock=_didExecuteBlock;
- (id)actionName;
- (void)executeRedo;
- (void)executeUndo;
- (void)execute;
- (void)didExecute;
- (id)initWithContactStore:(id)arg1 contacts:(id)arg2 imageData:(id)arg3 largeImageData:(id)arg4 clippingRect:(struct CGRect)arg5 ignoresGuardianRestrictions:(BOOL)arg6 shouldSave:(BOOL)arg7;
- (id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2;

@end

