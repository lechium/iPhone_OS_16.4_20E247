//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDMutableIAPInfo, NSArray, NSMutableArray, NSNumber, NSString;

@interface IAPInfoDAAPResponseDecoder : NSObject
{
    unsigned int _status;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    NSMutableArray *_deletedItems;	// 24 = 0x18
    NSMutableArray *_currentItemsArray;	// 32 = 0x20
    ASDMutableIAPInfo *_currentItem;	// 40 = 0x28
    _Bool _errorParsingItem;	// 48 = 0x30
    _Bool _success;	// 49 = 0x31
    _Bool _update;	// 50 = 0x32
    NSNumber *_serverRevision;	// 56 = 0x38
    NSArray *_addedIAPs;	// 64 = 0x40
    NSArray *_removedIAPs;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001ba966
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x00100000001ba854
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x00100000001ba456
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x00100000001ba3dc
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x00100000001ba3ba
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x00100000001ba2ec
- (void)parser:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000001ba2a3
- (void)parserDidCancel:(id)arg1;	// IMP=0x00100000001ba25a
- (void)parser:(id)arg1 didFinishWithState:(long long)arg2;	// IMP=0x00100000001ba03a
- (void)parserDidStart:(id)arg1;	// IMP=0x00100000001b9fde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
