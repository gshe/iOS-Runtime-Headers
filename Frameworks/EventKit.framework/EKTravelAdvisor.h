/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvisor : NSObject {
    BOOL _invalidated;
    EKTravelAgendaItem *_nextAgendaItem;
    EKTravelPrediction *_prediction;
    NSMutableArray *_queue;
    BOOL _queueDirty;
    <EKTravelRoutePredictor> *_routePredictor;
    Class _routePredictorClass;
    <EKTravelAdvisorWorld> *_world;
}

- (void)_forceInvalidatePrediction;
- (void)_setWakeupCriteriaForPeriodWhileWaitingForRouteHypothesis;
- (void)_setWakeupCriteriaFromCurrentPrediction;
- (void)_updatePrediction;
- (void)_updatePredictionFromCurrentLocation:(id)arg1;
- (void)addAgendaItem:(id)arg1;
- (BOOL)authorizedToAcquireLocation;
- (void)dealloc;
- (id)init;
- (id)initWithWorld:(id)arg1 routePredictorClass:(Class)arg2;
- (void)invalidate;
- (void)removeAgendaItem:(id)arg1;
- (void)setLocationAuthorizationCallback:(id /* block */)arg1;

@end