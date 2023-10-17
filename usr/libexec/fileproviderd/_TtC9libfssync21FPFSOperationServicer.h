//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC9libfssync21FPFSOperationServicer : _TtCs12_SwiftObject
{
    MISSING_TYPE *backend;	// 16 = 0x10
    MISSING_TYPE *extender;	// 24 = 0x18
    MISSING_TYPE *request;	// 32 = 0x20
}

- (void)updateIgnoreStateOfItemWithIdentifiers:(id)arg1 ignoreState:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x002000000014b840
- (id)performActionWithIdentifier:(id)arg1 onItemsWithIdentifiers:(id)arg2 domainIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000014a200
- (void)deleteItemsWithIDs:(id)arg1 baseVersions:(id)arg2 options:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000149e00
- (void)userInteractionErrorsForPerformingAction:(id)arg1 sourceItems:(id)arg2 destinationItem:(id)arg3 fpProviderDomainId:(id)arg4 sourceItemKeysAllowList:(id)arg5 destinationItemKeysAllowList:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000146710
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000145fc0
- (void)wakeForSessionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000145da0
- (id)disconnectDomainID:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000145bc0
- (id)fetchPublishingURLForItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000145a00
- (void)fetchTrashIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001457e0
- (void)preflightTrashItemIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000145520
- (void)fetchItemID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000145340
- (void)fetchDefaultContainerForBundleIdentifier:(id)arg1 defaultName:(id)arg2 inDomainIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000144980
- (void)userCheckedSuppressionCheckboxForUserInteractionIdentifier:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000144500
- (void)fetchHierarchyForItemID:(id)arg1 recursively:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000144230
- (void)bulkItemChanges:(id)arg1 changedFields:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000142eb0
- (void)singleItemChange:(id)arg1 changedFields:(unsigned long long)arg2 bounce:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000142d00
- (void)preflightReparentItemIDs:(id)arg1 underParentID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000142a40
- (void)startOperation:(id)arg1 toFetchThumbnailsWithDictionary:(id)arg2 size:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001424e0
- (void)startOperation:(id)arg1 toFetchThumbnailsForItemIdentifiers:(id)arg2 size:(struct CGSize)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000141b30

@end
