//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RCFoldersFetchedResultsController;

__attribute__((visibility("hidden")))
@interface __RCFolderContentsDelegate : NSObject
{
    RCFoldersFetchedResultsController *_foldersController;	// 8 = 0x8
}

@property(nonatomic) RCFoldersFetchedResultsController *foldersController; // @synthesize foldersController=_foldersController;
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000000003d923
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000000003d91d
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000000003d917

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
