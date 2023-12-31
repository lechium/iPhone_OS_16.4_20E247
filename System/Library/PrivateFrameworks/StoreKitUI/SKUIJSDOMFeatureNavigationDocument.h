//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, IKJSNavigationDocument, NSMutableArray, NSString, SKUINavigationDocumentController;

__attribute__((visibility("hidden")))
@interface SKUIJSDOMFeatureNavigationDocument : NSObject
{
    IKJSNavigationDocument *_jsNavigationDocument;	// 8 = 0x8
    SKUINavigationDocumentController *_navigationDocumentController;	// 16 = 0x10
    NSMutableArray *_stackItems;	// 24 = 0x18
    IKAppContext *_appContext;	// 32 = 0x20
    NSString *_featureName;	// 40 = 0x28
}

+ (id)possibleFeatureNames;	// IMP=0x00100000002e12bd
+ (id)makeFeatureJSObjectForFeature:(id)arg1;	// IMP=0x00100000002e123c
- (void).cxx_destruct;	// IMP=0x00000000002e1c57
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // @synthesize navigationDocumentController=_navigationDocumentController;
- (void)removeDocument:(id)arg1;	// IMP=0x00000000002e1b1c
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;	// IMP=0x00000000002e1950
- (void)popToRootDocument;	// IMP=0x00000000002e18eb
- (void)popToDocument:(id)arg1;	// IMP=0x00000000002e17bf
- (void)popDocument;	// IMP=0x00000000002e178f
- (void)pushDocument:(id)arg1 options:(id)arg2;	// IMP=0x00000000002e16b8
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;	// IMP=0x00000000002e14ec
- (id)documents;	// IMP=0x00000000002e1319
- (void)clear;	// IMP=0x00000000002e12e9
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;	// IMP=0x00000000002e10d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

