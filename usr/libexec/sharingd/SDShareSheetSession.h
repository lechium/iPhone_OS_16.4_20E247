//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSOperationQueue, NSString, NSURL, NSXPCConnection, SDAirDropActivity, SDPeopleBrowser, SDScreenTimeMonitor, SDShareSheetProxyLoaderManager, SDSuggestionBrowser, SDXPCHelperConnection, SFAirDropNode, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISUIActivityViewControllerConfiguration, UISelectionFeedbackGenerator, _UIActivityHelper, _UIUserDefaultsActivity;
@protocol SDShareSheetSessionDelegate;

@interface SDShareSheetSession : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _instantShareSheet;	// 9 = 0x9
    _Bool _airDropAllowed;	// 10 = 0xa
    _Bool _engagedWithSheet;	// 11 = 0xb
    _Bool _sentInitialConfiguration;	// 12 = 0xc
    _Bool _sharingExpanded;	// 13 = 0xd
    _Bool _shouldSuggestFamilyMembers;	// 14 = 0xe
    _Bool _isSharePlayAvailable;	// 15 = 0xf
    _Bool _isCollaborative;	// 16 = 0x10
    _Bool _supportsCollaboration;	// 17 = 0x11
    _Bool _itemsRequested;	// 18 = 0x12
    _Bool _itemsReady;	// 19 = 0x13
    _Bool _firedImpactHaptic;	// 20 = 0x14
    _Bool _transferActive;	// 21 = 0x15
    _Bool _invalidateCalled;	// 22 = 0x16
    int _sharedItemsCount;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
    NSXPCConnection *__connection;	// 40 = 0x28
    NSXPCConnection *__uiServiceConnection;	// 48 = 0x30
    id <SDShareSheetSessionDelegate> _delegate;	// 56 = 0x38
    long long _sharedItemsRequestID;	// 64 = 0x40
    long long _attachmentCount;	// 72 = 0x48
    NSMutableOrderedSet *_cachedSharedItems;	// 80 = 0x50
    NSOperationQueue *_operationQueue;	// 88 = 0x58
    long long _generatedPreviews;	// 96 = 0x60
    NSMutableDictionary *_sharedItemsMap;	// 104 = 0x68
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;	// 112 = 0x70
    long long _lastTransferEvent;	// 120 = 0x78
    UINotificationFeedbackGenerator *_notificationHaptic;	// 128 = 0x80
    UISelectionFeedbackGenerator *_selectionHaptic;	// 136 = 0x88
    UIImpactFeedbackGenerator *_impactHaptic;	// 144 = 0x90
    SDAirDropActivity *_activeAirDropActivity;	// 152 = 0x98
    _UIUserDefaultsActivity *_shareUserDefaultsActivity;	// 160 = 0xa0
    SDScreenTimeMonitor *_screenTimeMonitor;	// 168 = 0xa8
    SFAirDropNode *_selectedNode;	// 176 = 0xb0
    NSMutableDictionary *_transferNodes;	// 184 = 0xb8
    SFAirDropNode *_selectedRecipient;	// 192 = 0xc0
    SDPeopleBrowser *_peopleBrowser;	// 200 = 0xc8
    SDSuggestionBrowser *_suggestionBrowser;	// 208 = 0xd0
    SDXPCHelperConnection *_xpcHelperCnx;	// 216 = 0xd8
    _UIActivityHelper *_activityHelper;	// 224 = 0xe0
    UISUIActivityViewControllerConfiguration *_hostConfiguration;	// 232 = 0xe8
    NSArray *_orderedPresentableActivities;	// 240 = 0xf0
    NSArray *_hiddenActivities;	// 248 = 0xf8
    NSDictionary *_bundleIDToActivities;	// 256 = 0x100
    NSArray *_airDropPeople;	// 264 = 0x108
    NSArray *_suggestedPeople;	// 272 = 0x110
    NSArray *_shareActivities;	// 280 = 0x118
    NSDictionary *_shareActivitiesByUUID;	// 288 = 0x120
    NSArray *_shareActivitiesInUserOrder;	// 296 = 0x128
    NSArray *_visibleShareActivities;	// 304 = 0x130
    NSArray *_actionActivities;	// 312 = 0x138
    NSDictionary *_actionActivitiesByUUID;	// 320 = 0x140
    NSArray *_actionActivitiesInUserOrder;	// 328 = 0x148
    NSArray *_visibleActionActivities;	// 336 = 0x150
    NSArray *_favoriteApps;	// 344 = 0x158
    NSArray *_favoriteActions;	// 352 = 0x160
    NSArray *_airDropNodes;	// 360 = 0x168
    NSArray *_peopleNodes;	// 368 = 0x170
    NSArray *_hostShareActivityProxies;	// 376 = 0x178
    NSArray *_hostActionActivityProxies;	// 384 = 0x180
    NSMutableDictionary *_realNameToNodeID;	// 392 = 0x188
    NSMutableDictionary *_shareActivityToID;	// 400 = 0x190
    NSMutableDictionary *_actionActivityToID;	// 408 = 0x198
    NSNumber *_nearbyCountSlotID;	// 416 = 0x1a0
    long long _nearbyCountBadge;	// 424 = 0x1a8
    NSURL *_urlBeingShared;	// 432 = 0x1b0
    NSMutableArray *_activeSecurityContexts;	// 440 = 0x1b8
    SDShareSheetProxyLoaderManager *_proxyLoaderManager;	// 448 = 0x1c0
    CDUnknownBlockType _disabledNodesUpdatedHandler;	// 456 = 0x1c8
    NSArray *_peopleSuggestionBundleIds;	// 464 = 0x1d0
    NSData *_processedImageResultsData;	// 472 = 0x1d8
}

+ (id)secondaryLabelColorWithHostConfiguration:(id)arg1;	// IMP=0x002000000014c562
+ (id)labelColorWithHostConfiguration:(id)arg1;	// IMP=0x001000000014c3e5
- (void).cxx_destruct;	// IMP=0x002000000014df32
@property(copy, nonatomic) NSData *processedImageResultsData; // @synthesize processedImageResultsData=_processedImageResultsData;
@property(copy, nonatomic) NSArray *peopleSuggestionBundleIds; // @synthesize peopleSuggestionBundleIds=_peopleSuggestionBundleIds;
@property(nonatomic) _Bool invalidateCalled; // @synthesize invalidateCalled=_invalidateCalled;
@property(copy, nonatomic) CDUnknownBlockType disabledNodesUpdatedHandler; // @synthesize disabledNodesUpdatedHandler=_disabledNodesUpdatedHandler;
@property(retain, nonatomic) SDShareSheetProxyLoaderManager *proxyLoaderManager; // @synthesize proxyLoaderManager=_proxyLoaderManager;
@property(retain, nonatomic) NSMutableArray *activeSecurityContexts; // @synthesize activeSecurityContexts=_activeSecurityContexts;
@property(retain, nonatomic) NSURL *urlBeingShared; // @synthesize urlBeingShared=_urlBeingShared;
@property(nonatomic) long long nearbyCountBadge; // @synthesize nearbyCountBadge=_nearbyCountBadge;
@property(retain, nonatomic) NSNumber *nearbyCountSlotID; // @synthesize nearbyCountSlotID=_nearbyCountSlotID;
@property(retain, nonatomic) NSMutableDictionary *actionActivityToID; // @synthesize actionActivityToID=_actionActivityToID;
@property(retain, nonatomic) NSMutableDictionary *shareActivityToID; // @synthesize shareActivityToID=_shareActivityToID;
@property(retain, nonatomic) NSMutableDictionary *realNameToNodeID; // @synthesize realNameToNodeID=_realNameToNodeID;
@property(retain, nonatomic) NSArray *hostActionActivityProxies; // @synthesize hostActionActivityProxies=_hostActionActivityProxies;
@property(retain, nonatomic) NSArray *hostShareActivityProxies; // @synthesize hostShareActivityProxies=_hostShareActivityProxies;
@property(retain, nonatomic) NSArray *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
@property(retain, nonatomic) NSArray *airDropNodes; // @synthesize airDropNodes=_airDropNodes;
@property(retain, nonatomic) NSArray *favoriteActions; // @synthesize favoriteActions=_favoriteActions;
@property(retain, nonatomic) NSArray *favoriteApps; // @synthesize favoriteApps=_favoriteApps;
- (void)setVisibleActionActivities:(id)arg1;	// IMP=0x001000000014dd41
- (id)visibleActionActivities;	// IMP=0x001000000014dd34
@property(retain, nonatomic) NSArray *actionActivitiesInUserOrder; // @synthesize actionActivitiesInUserOrder=_actionActivitiesInUserOrder;
- (void);	// IMP=0x001000000014dcff
@property(retain, nonatomic) NSDictionary *actionActivitiesByUUID; // @synthesize actionActivitiesByUUID=_actionActivitiesByUUID;
@property(retain, nonatomic) NSArray *actionActivities; // @synthesize actionActivities=_actionActivities;
@property(retain, nonatomic) NSArray *visibleShareActivities; // @synthesize visibleShareActivities=_visibleShareActivities;
@property(retain, nonatomic) NSArray *shareActivitiesInUserOrder; // @synthesize shareActivitiesInUserOrder=_shareActivitiesInUserOrder;
@property(retain, nonatomic) NSDictionary *shareActivitiesByUUID; // @synthesize shareActivitiesByUUID=_shareActivitiesByUUID;
@property(retain, nonatomic) NSArray *shareActivities; // @synthesize shareActivities=_shareActivities;
@property(retain, nonatomic) NSArray *suggestedPeople; // @synthesize suggestedPeople=_suggestedPeople;
@property(retain, nonatomic) NSArray *airDropPeople; // @synthesize airDropPeople=_airDropPeople;
@property(retain, nonatomic) NSDictionary *bundleIDToActivities; // @synthesize bundleIDToActivities=_bundleIDToActivities;
@property(retain, nonatomic) NSArray *hiddenActivities; // @synthesize hiddenActivities=_hiddenActivities;
@property(retain, nonatomic) NSArray *orderedPresentableActivities; // @synthesize orderedPresentableActivities=_orderedPresentableActivities;
@property(retain, nonatomic) UISUIActivityViewControllerConfiguration *hostConfiguration; // @synthesize hostConfiguration=_hostConfiguration;
@property(retain, nonatomic) _UIActivityHelper *activityHelper; // @synthesize activityHelper=_activityHelper;
@property(retain, nonatomic) SDXPCHelperConnection *xpcHelperCnx; // @synthesize xpcHelperCnx=_xpcHelperCnx;
@property(retain, nonatomic) SDSuggestionBrowser *suggestionBrowser; // @synthesize suggestionBrowser=_suggestionBrowser;
@property(retain, nonatomic) SDPeopleBrowser *peopleBrowser; // @synthesize peopleBrowser=_peopleBrowser;
@property(retain, nonatomic) SFAirDropNode *selectedRecipient; // @synthesize selectedRecipient=_selectedRecipient;
@property(retain, nonatomic) NSMutableDictionary *transferNodes; // @synthesize transferNodes=_transferNodes;
@property(retain, nonatomic) SFAirDropNode *selectedNode; // @synthesize selectedNode=_selectedNode;
@property(retain, nonatomic) SDScreenTimeMonitor *screenTimeMonitor; // @synthesize screenTimeMonitor=_screenTimeMonitor;
@property(retain, nonatomic) _UIUserDefaultsActivity *shareUserDefaultsActivity; // @synthesize shareUserDefaultsActivity=_shareUserDefaultsActivity;
@property(retain, nonatomic) SDAirDropActivity *activeAirDropActivity; // @synthesize activeAirDropActivity=_activeAirDropActivity;
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactHaptic; // @synthesize impactHaptic=_impactHaptic;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionHaptic; // @synthesize selectionHaptic=_selectionHaptic;
@property(retain, nonatomic) UINotificationFeedbackGenerator *notificationHaptic; // @synthesize notificationHaptic=_notificationHaptic;
@property(nonatomic) long long lastTransferEvent; // @synthesize lastTransferEvent=_lastTransferEvent;
@property(retain, nonatomic) NSMutableDictionary *sharedItemsRequestIDToPreviewPhoto; // @synthesize sharedItemsRequestIDToPreviewPhoto=_sharedItemsRequestIDToPreviewPhoto;
@property(retain, nonatomic) NSMutableDictionary *sharedItemsMap; // @synthesize sharedItemsMap=_sharedItemsMap;
@property(nonatomic) int sharedItemsCount; // @synthesize sharedItemsCount=_sharedItemsCount;
@property(nonatomic) long long generatedPreviews; // @synthesize generatedPreviews=_generatedPreviews;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool transferActive; // @synthesize transferActive=_transferActive;
@property(nonatomic) _Bool firedImpactHaptic; // @synthesize firedImpactHaptic=_firedImpactHaptic;
@property(nonatomic) _Bool itemsReady; // @synthesize itemsReady=_itemsReady;
@property(nonatomic) _Bool itemsRequested; // @synthesize itemsRequested=_itemsRequested;
@property(retain, nonatomic) NSMutableOrderedSet *cachedSharedItems; // @synthesize cachedSharedItems=_cachedSharedItems;
@property(nonatomic) long long attachmentCount; // @synthesize attachmentCount=_attachmentCount;
@property(nonatomic) long long sharedItemsRequestID; // @synthesize sharedItemsRequestID=_sharedItemsRequestID;
@property(nonatomic) _Bool supportsCollaboration; // @synthesize supportsCollaboration=_supportsCollaboration;
@property(nonatomic) _Bool isCollaborative; // @synthesize isCollaborative=_isCollaborative;
@property(nonatomic) _Bool isSharePlayAvailable; // @synthesize isSharePlayAvailable=_isSharePlayAvailable;
@property(nonatomic) _Bool shouldSuggestFamilyMembers; // @synthesize shouldSuggestFamilyMembers=_shouldSuggestFamilyMembers;
@property(nonatomic) _Bool sharingExpanded; // @synthesize sharingExpanded=_sharingExpanded;
@property(nonatomic) _Bool sentInitialConfiguration; // @synthesize sentInitialConfiguration=_sentInitialConfiguration;
@property(nonatomic) _Bool engagedWithSheet; // @synthesize engagedWithSheet=_engagedWithSheet;
@property(nonatomic) _Bool airDropAllowed; // @synthesize airDropAllowed=_airDropAllowed;
@property(nonatomic) __weak id <SDShareSheetSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool instantShareSheet; // @synthesize instantShareSheet=_instantShareSheet;
@property(retain, nonatomic) NSXPCConnection *_uiServiceConnection; // @synthesize _uiServiceConnection=__uiServiceConnection;
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)proxyLoaderManagerDidFinishLoadingProxySection:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x001000000014d712
- (void)proxyLoaderManager:(id)arg1 didLoadProxiesWithChangeDetails:(id)arg2;	// IMP=0x001000000014d6b6
- (void)_updateProxiesWithChangeDetails:(id)arg1;	// IMP=0x001000000014d4ce
- (void)_removeFailedIndexes:(id)arg1 forProxySection:(id)arg2;	// IMP=0x001000000014d294
- (void)reportCurrentInvocationForDuration:(long long)arg1;	// IMP=0x001000000014ce84
- (void)_loadProxySectionWithType:(long long)arg1;	// IMP=0x001000000014cdb9
- (id)_proxySectionForType:(long long)arg1;	// IMP=0x001000000014ccca
- (id)minimumVisibleShareActivities;	// IMP=0x001000000014c6fa
- (void)generateSpecialPreviewPhotoForRequestID:(long long)arg1;	// IMP=0x001000000014be45
- (_Bool)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x001000000014bb30
- (_Bool)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x001000000014b8c0
- (_Bool)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000014b2e6
- (_Bool)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 itemIndex:(int)arg6;	// IMP=0x001000000014b012
- (_Bool)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x001000000014aae1
- (_Bool)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 itemIndex:(int)arg5;	// IMP=0x001000000014a518
- (_Bool)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id *)arg3;	// IMP=0x00100000001498b3
- (void)resetAfterAirDropTransfer;	// IMP=0x00100000001497d3
- (void)startSendForNode:(id)arg1 WithItems:(id)arg2 itemData:(id)arg3;	// IMP=0x0010000000148b77
@property(readonly, nonatomic) NSString *hostAppProcessName;
@property(readonly, nonatomic) NSString *hostAppBundleID;
- (id)_orderedActivitiesIncludingUserDisabledExtensionsForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000148aa7
- (void)_loadPresentableActivitiesForAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x001000000014899d
- (id)_orderedAvailableActivitiesForAuditToken:(CDStruct_4c969caf)arg1 WithMatchingContextCustomizationBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000148577
- (void)checkPolicyForAirDropPeople;	// IMP=0x001000000014811b
- (void)checkPolicyForSuggestedPeople;	// IMP=0x00100000001479c3
- (void)updateRestrictedActivityTypes:(id)arg1;	// IMP=0x001000000014725d
- (void)nodesPotentiallyUpdated;	// IMP=0x00100000001471ab
- (void)systemRestrictionsChanged:(id)arg1;	// IMP=0x0010000000146a15
- (void)removeStatusMonitorObservers;	// IMP=0x00100000001469c2
- (void)addStatusMonitorObservers;	// IMP=0x0010000000146931
- (id)airdropNodeForIdentifier:(id)arg1;	// IMP=0x00100000001466cb
- (void)_deactivateSecurityContext:(id)arg1;	// IMP=0x0010000000146607
- (void)_activateSecurityContext:(id)arg1;	// IMP=0x0010000000146543
- (void)setUiServiceConnection:(id)arg1;	// IMP=0x00100000001464d7
- (id)uiServiceConnection;	// IMP=0x001000000014647c
- (id)connection;	// IMP=0x0010000000146421
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0010000000146164
- (void)activate;	// IMP=0x0010000000145f97
- (id)initWithSessionID:(id)arg1 xpcConnection:(id)arg2 instantShareSheet:(_Bool)arg3;	// IMP=0x001000000014584a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

