//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsDestination, NSMutableArray, NSString;

@interface MapsSuggestionsDestinationLink : NSObject
{
    MapsSuggestionsDestination *_from;	// 8 = 0x8
    MapsSuggestionsDestination *_to;	// 16 = 0x10
    NSMutableArray *_destinationLinkOptions;	// 24 = 0x18
    NSMutableArray *_breadcrumbs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000008adb
@property(retain, nonatomic) NSMutableArray *breadcrumbs; // @synthesize breadcrumbs=_breadcrumbs;
@property(retain, nonatomic) NSMutableArray *destinationLinkOptions; // @synthesize destinationLinkOptions=_destinationLinkOptions;
@property(nonatomic) __weak MapsSuggestionsDestination *to; // @synthesize to=_to;
@property(nonatomic) __weak MapsSuggestionsDestination *from; // @synthesize from=_from;
- (id)objectForJSON;	// IMP=0x0010000000008400
- (id)nameForJSON;	// IMP=0x00100000000083f3
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007e3b
- (_Bool)hasLinkOptions;	// IMP=0x0010000000007dd1
- (double)confidenceOfHavingBeenOnDestinationLink;	// IMP=0x0010000000007d3f
- (double)containsTime:(id)arg1;	// IMP=0x0010000000007b25
- (double)containsLocation:(id)arg1;	// IMP=0x00100000000074a8
- (_Bool)addBreadCrumbIfWithin:(id)arg1;	// IMP=0x00100000000072b9
- (void)addRoute:(id)arg1;	// IMP=0x0010000000007115
- (void)addETA:(id)arg1;	// IMP=0x0010000000006e2d
- (void)addLinkOption:(id)arg1;	// IMP=0x0010000000006cd0
- (id)initFromDestination:(id)arg1 toDestination:(id)arg2;	// IMP=0x0010000000006bac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

