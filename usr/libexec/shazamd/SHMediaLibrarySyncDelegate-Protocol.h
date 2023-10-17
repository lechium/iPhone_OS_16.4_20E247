//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, SHMediaLibrarySnapshot;
@protocol SHMediaLibrarySync;

@protocol SHMediaLibrarySyncDelegate <NSObject>

@optional
- (void)_libraryDidCompleteSync:(id <SHMediaLibrarySync>)arg1;
- (void)_library:(id <SHMediaLibrarySync>)arg1 didProduceError:(NSError *)arg2 failedItemIdentifiers:(NSArray *)arg3;
- (void)_library:(id <SHMediaLibrarySync>)arg1 didChangeWithSnapshot:(SHMediaLibrarySnapshot *)arg2;
- (void)_libraryWillBeginSync:(id <SHMediaLibrarySync>)arg1;
@end
