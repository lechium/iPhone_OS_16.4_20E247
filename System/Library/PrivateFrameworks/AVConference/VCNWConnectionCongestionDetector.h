//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface VCNWConnectionCongestionDetector : NSObject
{
    AVCStatisticsCollector *_statisticsCollector;	// 8 = 0x8
    struct tagVCStatisticsMessage _previousStatistics;	// 16 = 0x10
    void *_logNWDump;	// 184 = 0xb8
    unsigned int _averageThroughputBps;	// 192 = 0xc0
    unsigned int _averagePacketDelayMs;	// 196 = 0xc4
    unsigned int _maxAveragePacketDelayMs;	// 200 = 0xc8
    unsigned int _lastTimestampWithPacketDrop;	// 204 = 0xcc
    unsigned int _packetDropCount;	// 208 = 0xd0
    unsigned int _packetDropCountPerFrame;	// 212 = 0xd4
    _Bool _didSendCongestionEvent;	// 216 = 0xd8
}

@property(readonly) unsigned int packetDropCount; // @synthesize packetDropCount=_packetDropCount;
@property(readonly) unsigned int averageThroughputBps; // @synthesize averageThroughputBps=_averageThroughputBps;
@property unsigned int maxAveragePacketDelayMs; // @synthesize maxAveragePacketDelayMs=_maxAveragePacketDelayMs;
@property(readonly) unsigned int averagePacketDelayMs; // @synthesize averagePacketDelayMs=_averagePacketDelayMs;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)enableNWLogDump:(void *)arg1;	// IMP=0x0000000000027f7a
- (void)sendCongestionEventWithTimestamp:(unsigned int)arg1;	// IMP=0x0000000000027eb9
- (_Bool)processNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;	// IMP=0x0000000000027d56
- (_Bool)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x0000000000027b17
- (void)dealloc;	// IMP=0x0000000000027ab9

@end

