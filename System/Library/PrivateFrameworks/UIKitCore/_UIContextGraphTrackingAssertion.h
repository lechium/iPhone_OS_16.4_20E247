//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSSimpleAssertion.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIContextGraphTrackingAssertion : BSSimpleAssertion
{
    unsigned int _contextID;	// 8 = 0x8
    NSArray *_contextIDGraph;	// 16 = 0x10
    CDUnknownBlockType _clientHandlerBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000081fee1
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (_Bool)isContextIDRelevant:(unsigned int)arg1;	// IMP=0x000000000081fd80
- (void)_setWindowGraph:(id)arg1 callHandler:(_Bool)arg2;	// IMP=0x000000000081fcd0
- (void)setWindowGraph:(id)arg1;	// IMP=0x000000000081fcb9
- (id)initWithContextID:(unsigned int)arg1 windowGraph:(id)arg2 clientHandlerBlock:(CDUnknownBlockType)arg3 invalidationBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000081fb6b

@end

