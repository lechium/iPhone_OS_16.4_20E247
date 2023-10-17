//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSOrderedSet, NSSet, NSString, NSUUID, REMCDAccount, REMCDSharee, REMColor;

@interface REMCDList
{
}

+ (id)propertiesThatShouldTriggerReindexing;	// IMP=0x00200000000533eb
+ (id)cdEntityName;	// IMP=0x00100000000532fe
+ (_Bool)isAbstract;	// IMP=0x00100000000532f6
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x001000000005b652
+ (id)fetchRequest;	// IMP=0x001000000009a588
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x001000000033bd70
+ (id)newPlaceholderObjectForRecordID:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x0010000000334f30
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x0010000000334de0
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x00100000003344b0
+ (id)recordTypes;	// IMP=0x0010000000334390
- (id)spotlightObjectToReindex;	// IMP=0x001000000005340b
- (void)incrementSpotlightIndexCount;	// IMP=0x0010000000053398
- (_Bool)isShared;	// IMP=0x0010000000053317
- (id)_parentZoneMismatchErrorDebugDescription;	// IMP=0x001000000005325e
- (_Bool)validateForDelete:(id *)arg1;	// IMP=0x0010000000053197
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x00100000000530c7
- (long long)compare:(id)arg1;	// IMP=0x0010000000052fd2
@property(retain, nonatomic) NSData *reminderIDsMergeableOrdering; // @dynamic reminderIDsMergeableOrdering;
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x001000000005b756
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x001000000005b67e
- (_Bool)shouldCascadeMarkAsDeleteInto:(id)arg1 forRelationship:(id)arg2;	// IMP=0x001000000005b540
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000005b3da
@property(readonly) NSString *displayName;
- (_Bool)shouldUseResolutionTokenMapForMergingData;	// IMP=0x0010000000333fb0
- (void)restoreParentReferenceAfterUnmarkingForDeletion;	// IMP=0x0010000000340b40
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x0010000000340a90
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000003409e0
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x0010000000340970
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x001000000033ccc0
- (void)updateObjectWithShare:(id)arg1;	// IMP=0x001000000033bd10
- (id)shareType;	// IMP=0x0010000000338f40
- (id)shareTitle;	// IMP=0x0010000000338e60
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x0010000000338dd0
- (_Bool)supportsDeletionByTTL;	// IMP=0x0010000000338db0
- (id)newlyCreatedRecord;	// IMP=0x0010000000338d60
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000003381d0
- (void)sortChildrenObjects;	// IMP=0x0010000000335b10
- (id)recordType;	// IMP=0x0010000000335120
- (id)recordZoneName;	// IMP=0x00100000003350c0
- (void)objectWasDeletedFromCloudByAnotherDevice;	// IMP=0x0010000000335020

// Remaining properties
@property(copy, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(retain, nonatomic) NSSet *calDAVNotifications; // @dynamic calDAVNotifications;
@property(retain, nonatomic) NSOrderedSet *childLists; // @dynamic childLists;
@property(retain, nonatomic) NSOrderedSet *childSmartLists; // @dynamic childSmartLists;
@property(retain, nonatomic) REMColor *color; // @dynamic color;
@property(retain, nonatomic) NSData *daBulkRequests; // @dynamic daBulkRequests;
@property(nonatomic) long long daDisplayOrder; // @dynamic daDisplayOrder;
@property(copy, nonatomic) NSString *daExternalIdentificationTag; // @dynamic daExternalIdentificationTag;
@property(nonatomic) _Bool daIsEventOnlyContainer; // @dynamic daIsEventOnlyContainer;
@property(nonatomic) _Bool daIsImmutable; // @dynamic daIsImmutable;
@property(nonatomic) _Bool daIsNotificationsCollection; // @dynamic daIsNotificationsCollection;
@property(nonatomic) _Bool daIsReadOnly; // @dynamic daIsReadOnly;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isGroup; // @dynamic isGroup;
@property(nonatomic) _Bool isPinnedByCurrentUser; // @dynamic isPinnedByCurrentUser;
@property(copy, nonatomic) NSDate *lastUserAccessDate; // @dynamic lastUserAccessDate;
@property(retain, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier; // @dynamic mostRecentTargetTemplateIdentifier;
@property(retain, nonatomic) NSUUID *mostRecentTargetTemplateIdentifierByCurrentUser; // @dynamic mostRecentTargetTemplateIdentifierByCurrentUser;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) REMCDAccount *parentAccount; // @dynamic parentAccount;
@property(retain, nonatomic) REMCDList *parentList; // @dynamic parentList;
@property(copy, nonatomic) NSDate *pinnedDate; // @dynamic pinnedDate;
@property(retain, nonatomic) NSData *reminderIDsMergeableOrdering_v2_JSON; // @dynamic reminderIDsMergeableOrdering_v2_JSON;
@property(retain, nonatomic) NSOrderedSet *reminders; // @dynamic reminders;
@property(retain, nonatomic) REMCDSharee *sharedOwner; // @dynamic sharedOwner;
@property(copy, nonatomic) NSString *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property(copy, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(retain, nonatomic) NSSet *sharees; // @dynamic sharees;
@property(nonatomic) short sharingStatus; // @dynamic sharingStatus;
@property(nonatomic) _Bool showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(copy, nonatomic) NSString *sortingStyle; // @dynamic sortingStyle;
@property(nonatomic) long long spotlightIndexCount; // @dynamic spotlightIndexCount;
@property(readonly) Class superclass;

@end
